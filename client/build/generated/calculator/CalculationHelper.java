package calculator;


/**
 * Generated from IDL interface "Calculation".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:53:04 AM
 */

public abstract class CalculationHelper
{
	private volatile static org.omg.CORBA.TypeCode _type;
	public static org.omg.CORBA.TypeCode type ()
	{
		if (_type == null)
		{
			synchronized(CalculationHelper.class)
			{
				if (_type == null)
				{
					_type = org.omg.CORBA.ORB.init().create_interface_tc("IDL:calculator/Calculation:1.0", "Calculation");
				}
			}
		}
		return _type;
	}

	public static void insert (final org.omg.CORBA.Any any, final calculator.Calculation s)
	{
			any.insert_Object(s);
	}
	public static calculator.Calculation extract(final org.omg.CORBA.Any any)
	{
		return narrow(any.extract_Object()) ;
	}
	public static String id()
	{
		return "IDL:calculator/Calculation:1.0";
	}
	public static Calculation read(final org.omg.CORBA.portable.InputStream in)
	{
		return narrow(in.read_Object(calculator._CalculationStub.class));
	}
	public static void write(final org.omg.CORBA.portable.OutputStream _out, final calculator.Calculation s)
	{
		_out.write_Object(s);
	}
	public static calculator.Calculation narrow(final org.omg.CORBA.Object obj)
	{
		if (obj == null)
		{
			return null;
		}
		else if (obj instanceof calculator.Calculation)
		{
			return (calculator.Calculation)obj;
		}
		else if (obj._is_a("IDL:calculator/Calculation:1.0"))
		{
			calculator._CalculationStub stub;
			stub = new calculator._CalculationStub();
			stub._set_delegate(((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate());
			return stub;
		}
		else
		{
			throw new org.omg.CORBA.BAD_PARAM("Narrow failed");
		}
	}
	public static calculator.Calculation unchecked_narrow(final org.omg.CORBA.Object obj)
	{
		if (obj == null)
		{
			return null;
		}
		else if (obj instanceof calculator.Calculation)
		{
			return (calculator.Calculation)obj;
		}
		else
		{
			calculator._CalculationStub stub;
			stub = new calculator._CalculationStub();
			stub._set_delegate(((org.omg.CORBA.portable.ObjectImpl)obj)._get_delegate());
			return stub;
		}
	}
}
