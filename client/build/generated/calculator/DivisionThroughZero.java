package calculator;

/**
 * Generated from IDL exception "DivisionThroughZero".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:38:58 AM
 */

public final class DivisionThroughZero
	extends org.omg.CORBA.UserException
{
	/** Serial version UID. */
	private static final long serialVersionUID = 1L;
	public DivisionThroughZero()
	{
		super(calculator.DivisionThroughZeroHelper.id());
	}

	public java.lang.String message = "";
	public DivisionThroughZero(java.lang.String _reason,java.lang.String message)
	{
		super(_reason);
		this.message = message;
	}
	public DivisionThroughZero(java.lang.String message)
	{
		super(calculator.DivisionThroughZeroHelper.id());
		this.message = message;
	}
}
