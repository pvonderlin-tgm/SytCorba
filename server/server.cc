
#include <calculator.hh>

#ifdef HAVE_STD
#  include <iostream>
   using namespace std;
#  include <math.h>
#else
#  include <iostream.h>
#endif

static CORBA::Boolean bindObjectToName(CORBA::ORB_ptr, CORBA::Object_ptr);


class Calculation : public POA_calculator::Calculation
{
public:
    inline Calculation() {}
    virtual ~Calculation() {}
    virtual double ggt(const double numer, const double denom);
    virtual double kgv(const double numer, const double denom);
};

double Calculation::kgv(const double numer, const double denom){

	double n1 = numer;
	double n2 = denom;	
	double num = numer;
	double den = denom;
	double ggt = 0;	

    if(num<0){
        num=-num;
    }

    if(den<0){
        den=-den;
    }
	
    int i = 0;
    while(i<1)
    {
        if(num==0){ // trap if a==0
       		ggt = den;
		i=1;
	}
	 den = fmod(den,num); // otherwise here would be an error
        if(den==0){ // trap if b==0
     		ggt = num;
		i=1;       
	}
        num = fmod(num,den); // otherwise here would be an error
    }

	return CORBA::Double((n1 * n2) / ggt );	
}

double Calculation::ggt(const double numer, const double denom) {

	double num = numer;
	double den = denom;
	
    if(num<0){
        num=-num;
    }

    if(den<0){
        den=-den;
    }
 
    for(;;)
    {
        if(num==0) // trap if a==0
            return CORBA::Double(den);
        den = fmod(den,num); // otherwise here would be an error
        if(den==0) // trap if b==0
            return CORBA::Double(num);
        num = fmod(num,den); // otherwise here would be an error
    }    

}

int
main(int argc, char **argv)
{
  try {
    CORBA::ORB_var orb = CORBA::ORB_init(argc, argv);

    CORBA::Object_var obj = orb->resolve_initial_references("RootPOA");
    PortableServer::POA_var poa = PortableServer::POA::_narrow(obj);

    Calculation* calc = new Calculation();

    PortableServer::ObjectId_var calcid = poa->activate_object(calc);

    // Obtain a reference to the object, and register it in
    // the naming service.
    obj = calc->_this();

    CORBA::String_var x;
    x = orb->object_to_string(obj);
    cout << x << endl;

    if( !bindObjectToName(orb, obj) )
      return 1;

    calc->_remove_ref();

    PortableServer::POAManager_var pman = poa->the_POAManager();
    pman->activate();

    orb->run();
  }
  catch(CORBA::SystemException& ex) {
    cerr << "Caught CORBA::" << ex._name() << endl;
  }
  catch(CORBA::Exception& ex) {
    cerr << "Caught CORBA::Exception: " << ex._name() << endl;
  }
  catch(omniORB::fatalException& fe) {
    cerr << "Caught omniORB::fatalException:" << endl;
    cerr << "  file: " << fe.file() << endl;
    cerr << "  line: " << fe.line() << endl;
    cerr << "  mesg: " << fe.errmsg() << endl;
  }
  return 0;
}

//////////////////////////////////////////////////////////////////////

static CORBA::Boolean
bindObjectToName(CORBA::ORB_ptr orb, CORBA::Object_ptr objref)
{
  CosNaming::NamingContext_var rootContext;

  try {
    // Obtain a reference to the root context of the Name service:
    CORBA::Object_var obj;
    obj = orb->resolve_initial_references("NameService");

    // Narrow the reference returned.
    rootContext = CosNaming::NamingContext::_narrow(obj);
    if( CORBA::is_nil(rootContext) ) {
      cerr << "Failed to narrow the root naming context." << endl;
      return 0;
    }
  }
  catch (CORBA::NO_RESOURCES&) {
    cerr << "Caught NO_RESOURCES exception. You must configure omniORB "
	 << "with the location" << endl
	 << "of the naming service." << endl;
    return 0;
  }
  catch (CORBA::ORB::InvalidName&) {
    // This should not happen!
    cerr << "Service required is invalid [does not exist]." << endl;
    return 0;
  }

  try {
    // Bind a context called "test" to the root context:

    CosNaming::Name contextName;
    contextName.length(1);
    contextName[0].id   = (const char*) "test";       // string copied
    contextName[0].kind = (const char*) "my_context"; // string copied
    // Note on kind: The kind field is used to indicate the type
    // of the object. This is to avoid conventions such as that used
    // by files (name.type -- e.g. test.ps = postscript etc.)

    CosNaming::NamingContext_var testContext;
    try {
      // Bind the context to root.
      testContext = rootContext->bind_new_context(contextName);
    }
    catch(CosNaming::NamingContext::AlreadyBound& ex) {
      // If the context already exists, this exception will be raised.
      // In this case, just resolve the name and assign testContext
      // to the object returned:
      CORBA::Object_var obj;
      obj = rootContext->resolve(contextName);
      testContext = CosNaming::NamingContext::_narrow(obj);
      if( CORBA::is_nil(testContext) ) {
        cerr << "Failed to narrow naming context." << endl;
        return 0;
      }
    }

    // Bind objref with name Calculate to the testContext:
    CosNaming::Name objectName;
    objectName.length(1);
    objectName[0].id   = (const char*) "Calculation";   // string copied
    objectName[0].kind = (const char*) "Object"; // string copied

    try {
      testContext->bind(objectName, objref);
    }
    catch(CosNaming::NamingContext::AlreadyBound& ex) {
      testContext->rebind(objectName, objref);
    }
    // Note: Using rebind() will overwrite any Object previously bound
    //       to /test/Calculate with obj.
    //       Alternatively, bind() can be used, which will raise a
    //       CosNaming::NamingContext::AlreadyBound exception if the name
    //       supplied is already bound to an object.

    // Amendment: When using OrbixNames, it is necessary to first try bind
    // and then rebind, as rebind on it's own will throw a NotFoundexception if
    // the Name has not already been bound. [This is incorrect behaviour -
    // it should just bind].
  }
  catch(CORBA::TRANSIENT& ex) {
    cerr << "Caught system exception TRANSIENT -- unable to contact the "
         << "naming service." << endl
	 << "Make sure the naming server is running and that omniORB is "
	 << "configured correctly." << endl;

    return 0;
  }
  catch(CORBA::SystemException& ex) {
    cerr << "Caught a CORBA::" << ex._name()
	 << " while using the naming service." << endl;
    return 0;
  }
  return 1;
}
