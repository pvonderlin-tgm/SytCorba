// This file is generated by omniidl (C++ backend)- omniORB_4_2. Do not edit.

#include "calculator.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_2;



::CORBA::Exception::insertExceptionToAny calculator::DivisionThroughZero::insertToAnyFn = 0;
::CORBA::Exception::insertExceptionToAnyNCP calculator::DivisionThroughZero::insertToAnyFnNCP = 0;

calculator::DivisionThroughZero::DivisionThroughZero(const calculator::DivisionThroughZero& _s) : ::CORBA::UserException(_s)
{
  message = _s.message;

}

calculator::DivisionThroughZero::DivisionThroughZero(const char* _message)
{
  pd_insertToAnyFn    = calculator::DivisionThroughZero::insertToAnyFn;
  pd_insertToAnyFnNCP = calculator::DivisionThroughZero::insertToAnyFnNCP;
  message = _message;

}



calculator::DivisionThroughZero& calculator::DivisionThroughZero::operator=(const calculator::DivisionThroughZero& _s)
{
  if (&_s != this) {
    ((::CORBA::UserException*) this)->operator=(_s);
    message = _s.message;

  }
  return *this;
}

calculator::DivisionThroughZero::~DivisionThroughZero() {}

void calculator::DivisionThroughZero::_raise() const { throw *this; }

const char* calculator::DivisionThroughZero::_PD_repoId = "IDL:calculator/DivisionThroughZero:1.0";
const char* calculator::DivisionThroughZero::_PD_typeId = "Exception/UserException/calculator::DivisionThroughZero";

calculator::DivisionThroughZero* calculator::DivisionThroughZero::_downcast(::CORBA::Exception* _e) {
  return (DivisionThroughZero*) _NP_is_a(_e, _PD_typeId);
}

const calculator::DivisionThroughZero* calculator::DivisionThroughZero::_downcast(const ::CORBA::Exception* _e) {
  return (const DivisionThroughZero*) _NP_is_a(_e, _PD_typeId);
}

::CORBA::Exception* calculator::DivisionThroughZero::_NP_duplicate() const {
  return new DivisionThroughZero(*this);
}

const char* calculator::DivisionThroughZero::_NP_typeId() const {
  return _PD_typeId;
}

const char* calculator::DivisionThroughZero::_NP_repoId(int* _size) const {
  *_size = sizeof("IDL:calculator/DivisionThroughZero:1.0");
  return _PD_repoId;
}
 
void calculator::DivisionThroughZero::_NP_marshal(cdrStream& _s) const {
  *this >>= _s;
}

void
calculator::DivisionThroughZero::operator>>= (cdrStream& _n) const
{
  _n.marshalString(message,0);

}

void
calculator::DivisionThroughZero::operator<<= (cdrStream& _n)
{
  message = _n.unmarshalString(0);

}

calculator::Calculation_ptr calculator::Calculation_Helper::_nil() {
  return ::calculator::Calculation::_nil();
}

::CORBA::Boolean calculator::Calculation_Helper::is_nil(::calculator::Calculation_ptr p) {
  return ::CORBA::is_nil(p);

}

void calculator::Calculation_Helper::release(::calculator::Calculation_ptr p) {
  ::CORBA::release(p);
}

void calculator::Calculation_Helper::marshalObjRef(::calculator::Calculation_ptr obj, cdrStream& s) {
  ::calculator::Calculation::_marshalObjRef(obj, s);
}

calculator::Calculation_ptr calculator::Calculation_Helper::unmarshalObjRef(cdrStream& s) {
  return ::calculator::Calculation::_unmarshalObjRef(s);
}

void calculator::Calculation_Helper::duplicate(::calculator::Calculation_ptr obj) {
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
}

calculator::Calculation_ptr
calculator::Calculation::_duplicate(::calculator::Calculation_ptr obj)
{
  if (obj && !obj->_NP_is_nil())  omni::duplicateObjRef(obj);
  return obj;
}

calculator::Calculation_ptr
calculator::Calculation::_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


calculator::Calculation_ptr
calculator::Calculation::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if (!obj || obj->_NP_is_nil() || obj->_NP_is_pseudo()) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

calculator::Calculation_ptr
calculator::Calculation::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_Calculation _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_Calculation* _the_nil_ptr = 0;
  if (!_the_nil_ptr) {
    omni::nilRefLock().lock();
    if (!_the_nil_ptr) {
      _the_nil_ptr = new _objref_Calculation;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* calculator::Calculation::_PD_repoId = "IDL:calculator/Calculation:1.0";


calculator::_objref_Calculation::~_objref_Calculation() {
  
}


calculator::_objref_Calculation::_objref_Calculation(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::calculator::Calculation::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
calculator::_objref_Calculation::_ptrToObjRef(const char* id)
{
  if (id == ::calculator::Calculation::_PD_repoId)
    return (::calculator::Calculation_ptr) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (::CORBA::Object_ptr) this;

  if (omni::strMatch(id, ::calculator::Calculation::_PD_repoId))
    return (::calculator::Calculation_ptr) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (::CORBA::Object_ptr) this;

  return 0;
}


//
// Code for calculator::Calculation::ggt

// Proxy call descriptor class. Mangled signature:
//  _cdouble_i_cdouble_i_cdouble
class _0RL_cd_91b5843243508882_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_91b5843243508882_00000000(LocalCallFn lcfn, const char* op_, size_t oplen, _CORBA_Boolean upcall=0)
    : omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::Double arg_0;
  ::CORBA::Double arg_1;
  ::CORBA::Double result;
};

void _0RL_cd_91b5843243508882_00000000::marshalArguments(cdrStream& _n)
{
  arg_0 >>= _n;
  arg_1 >>= _n;

}

void _0RL_cd_91b5843243508882_00000000::unmarshalArguments(cdrStream& _n)
{
  (::CORBA::Double&)arg_0 <<= _n;
  (::CORBA::Double&)arg_1 <<= _n;

}

void _0RL_cd_91b5843243508882_00000000::marshalReturnedValues(cdrStream& _n)
{
  result >>= _n;

}

void _0RL_cd_91b5843243508882_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  (::CORBA::Double&)result <<= _n;

}

const char* const _0RL_cd_91b5843243508882_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_91b5843243508882_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_91b5843243508882_00000000* tcd = (_0RL_cd_91b5843243508882_00000000*)cd;
  calculator::_impl_Calculation* impl = (calculator::_impl_Calculation*) svnt->_ptrToInterface(calculator::Calculation::_PD_repoId);
  tcd->result = impl->ggt(tcd->arg_0, tcd->arg_1);


}

::CORBA::Double calculator::_objref_Calculation::ggt(::CORBA::Double numer, ::CORBA::Double denom)
{
  _0RL_cd_91b5843243508882_00000000 _call_desc(_0RL_lcfn_91b5843243508882_10000000, "ggt", 4);
  _call_desc.arg_0 = numer;
  _call_desc.arg_1 = denom;

  _invoke(_call_desc);
  return _call_desc.result;


}

calculator::_pof_Calculation::~_pof_Calculation() {}


omniObjRef*
calculator::_pof_Calculation::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::calculator::_objref_Calculation(ior, id);
}


::CORBA::Boolean
calculator::_pof_Calculation::is_a(const char* id) const
{
  if (omni::ptrStrMatch(id, ::calculator::Calculation::_PD_repoId))
    return 1;
  
  return 0;
}

const calculator::_pof_Calculation _the_pof_calculator_mCalculation;

calculator::_impl_Calculation::~_impl_Calculation() {}


::CORBA::Boolean
calculator::_impl_Calculation::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if (omni::strMatch(op, "ggt")) {

    _0RL_cd_91b5843243508882_00000000 _call_desc(_0RL_lcfn_91b5843243508882_10000000, "ggt", 4, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
calculator::_impl_Calculation::_ptrToInterface(const char* id)
{
  if (id == ::calculator::Calculation::_PD_repoId)
    return (::calculator::_impl_Calculation*) this;
  
  if (id == ::CORBA::Object::_PD_repoId)
    return (void*) 1;

  if (omni::strMatch(id, ::calculator::Calculation::_PD_repoId))
    return (::calculator::_impl_Calculation*) this;
  
  if (omni::strMatch(id, ::CORBA::Object::_PD_repoId))
    return (void*) 1;
  return 0;
}

const char*
calculator::_impl_Calculation::_mostDerivedRepoId()
{
  return ::calculator::Calculation::_PD_repoId;
}

POA_calculator::Calculation::~Calculation() {}
