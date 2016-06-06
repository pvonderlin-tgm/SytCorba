package calculator;


/**
 * Generated from IDL exception "DivisionThroughZero".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:38:58 AM
 */

public abstract class DivisionThroughZeroHelper
{
	private volatile static org.omg.CORBA.TypeCode _type;
	public static org.omg.CORBA.TypeCode type ()
	{
		if (_type == null)
		{
			synchronized(DivisionThroughZeroHelper.class)
			{
				if (_type == null)
				{
					_type = org.omg.CORBA.ORB.init().create_exception_tc(calculator.DivisionThroughZeroHelper.id(),"DivisionThroughZero",new org.omg.CORBA.StructMember[]{new org.omg.CORBA.StructMember("message", org.omg.CORBA.ORB.init().create_string_tc(0), null)});
				}
			}
		}
		return _type;
	}

	public static void insert (final org.omg.CORBA.Any any, final calculator.DivisionThroughZero s)
	{
		any.type(type());
		write( any.create_output_stream(),s);
	}

	public static calculator.DivisionThroughZero extract (final org.omg.CORBA.Any any)
	{
		org.omg.CORBA.portable.InputStream in = any.create_input_stream();
		try
		{
			return read (in);
		}
		finally
		{
			try
			{
				in.close();
			}
			catch (java.io.IOException e)
			{
			throw new RuntimeException("Unexpected exception " + e.toString() );
			}
		}
	}

	public static String id()
	{
		return "IDL:calculator/DivisionThroughZero:1.0";
	}
	public static calculator.DivisionThroughZero read (final org.omg.CORBA.portable.InputStream in)
	{
		String id = in.read_string();
		if (!id.equals(id())) throw new org.omg.CORBA.MARSHAL("wrong id: " + id);
		if (in instanceof org.jacorb.orb.giop.ReplyInputStream)
		{
			org.jacorb.orb.giop.ReplyInputStream reply = (org.jacorb.orb.giop.ReplyInputStream) in;
			org.omg.IOP.ServiceContext context = null;
			if ( (context = reply.getServiceContext(org.omg.IOP.ExceptionDetailMessage.value)) != null)
			{
				org.jacorb.orb.CDRInputStream details = new org.jacorb.orb.CDRInputStream(context.context_data);
				details.openEncapsulatedArray();
				id = details.read_wstring();
			}
		}
		java.lang.String x0;
		x0=in.read_string();
		final calculator.DivisionThroughZero result = new calculator.DivisionThroughZero(id, x0);
		return result;
	}
	public static void write (final org.omg.CORBA.portable.OutputStream out, final calculator.DivisionThroughZero s)
	{
		out.write_string(id());
		java.lang.String tmpResult0 = s.message;
out.write_string( tmpResult0 );
	}
}
