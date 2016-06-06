package calculator;

/**
 * Generated from IDL exception "DivisionThroughZero".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:53:04 AM
 */

public final class DivisionThroughZeroHolder
	implements org.omg.CORBA.portable.Streamable
{
	public calculator.DivisionThroughZero value;

	public DivisionThroughZeroHolder ()
	{
	}
	public DivisionThroughZeroHolder(final calculator.DivisionThroughZero initial)
	{
		value = initial;
	}
	public org.omg.CORBA.TypeCode _type ()
	{
		return calculator.DivisionThroughZeroHelper.type ();
	}
	public void _read(final org.omg.CORBA.portable.InputStream _in)
	{
		value = calculator.DivisionThroughZeroHelper.read(_in);
	}
	public void _write(final org.omg.CORBA.portable.OutputStream _out)
	{
		calculator.DivisionThroughZeroHelper.write(_out, value);
	}
}
