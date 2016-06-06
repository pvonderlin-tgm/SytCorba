package calculator;

import org.omg.PortableServer.POA;

/**
 * Generated from IDL interface "Calculation".
 *
 * @author JacORB IDL compiler V 3.7
 * @version generated at Jun 6, 2016 10:53:04 AM
 */

public class CalculationPOATie
	extends CalculationPOA
{
	private CalculationOperations _delegate;

	private POA _poa;
	public CalculationPOATie(CalculationOperations delegate)
	{
		_delegate = delegate;
	}
	public CalculationPOATie(CalculationOperations delegate, POA poa)
	{
		_delegate = delegate;
		_poa = poa;
	}
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
	public CalculationOperations _delegate()
	{
		return _delegate;
	}
	public void _delegate(CalculationOperations delegate)
	{
		_delegate = delegate;
	}
	public POA _default_POA()
	{
		if (_poa != null)
		{
			return _poa;
		}
		return super._default_POA();
	}
	public double ggt(double numer, double denom)
	{
		return _delegate.ggt(numer,denom);
	}

	public double kgv(double numer, double denom)
	{
		return _delegate.kgv(numer,denom);
	}

}
