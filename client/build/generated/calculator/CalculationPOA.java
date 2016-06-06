package calculator;


/**
 * Generated from IDL interface "Calculation".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:53:04 AM
 */

public abstract class CalculationPOA
	extends org.omg.PortableServer.Servant
	implements org.omg.CORBA.portable.InvokeHandler, calculator.CalculationOperations
{
	static private final java.util.HashMap<String,Integer> m_opsHash = new java.util.HashMap<String,Integer>();
	static
	{
		m_opsHash.put ( "ggt", Integer.valueOf(0));
		m_opsHash.put ( "kgv", Integer.valueOf(1));
	}
	private String[] ids = {"IDL:calculator/Calculation:1.0"};
	public calculator.Calculation _this()
	{
		org.omg.CORBA.Object __o = _this_object() ;
		calculator.Calculation __r = calculator.CalculationHelper.narrow(__o);
		return __r;
	}
	public calculator.Calculation _this(org.omg.CORBA.ORB orb)
	{
		org.omg.CORBA.Object __o = _this_object(orb) ;
		calculator.Calculation __r = calculator.CalculationHelper.narrow(__o);
		return __r;
	}
	public org.omg.CORBA.portable.OutputStream _invoke(String method, org.omg.CORBA.portable.InputStream _input, org.omg.CORBA.portable.ResponseHandler handler)
		throws org.omg.CORBA.SystemException
	{
		org.omg.CORBA.portable.OutputStream _out = null;
		// do something
		// quick lookup of operation
		java.lang.Integer opsIndex = (java.lang.Integer)m_opsHash.get ( method );
		if ( null == opsIndex )
			throw new org.omg.CORBA.BAD_OPERATION(method + " not found");
		switch ( opsIndex.intValue() )
		{
			case 0: // ggt
			{
				double _arg0=_input.read_double();
				double _arg1=_input.read_double();
				_out = handler.createReply();
				_out.write_double(ggt(_arg0,_arg1));
				break;
			}
			case 1: // kgv
			{
				double _arg0=_input.read_double();
				double _arg1=_input.read_double();
				_out = handler.createReply();
				_out.write_double(kgv(_arg0,_arg1));
				break;
			}
		}
		return _out;
	}

	public String[] _all_interfaces(org.omg.PortableServer.POA poa, byte[] obj_id)
	{
		return ids;
	}
}
