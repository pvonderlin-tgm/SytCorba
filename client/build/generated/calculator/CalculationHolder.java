package calculator;

/**
 * Generated from IDL interface "Calculation".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:38:58 AM
 */

public final class CalculationHolder	implements org.omg.CORBA.portable.Streamable{
	 public Calculation value;
	public CalculationHolder()
	{
	}
	public CalculationHolder (final Calculation initial)
	{
		value = initial;
	}
	public org.omg.CORBA.TypeCode _type()
	{
		return CalculationHelper.type();
	}
	public void _read (final org.omg.CORBA.portable.InputStream in)
	{
		value = CalculationHelper.read (in);
	}
	public void _write (final org.omg.CORBA.portable.OutputStream _out)
	{
		CalculationHelper.write (_out,value);
	}
}
