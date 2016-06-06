package calculator;

import org.omg.CosNaming.*;
import org.omg.CORBA.*;
import org.omg.CORBA.Object;

public class Client {
	
	public static void main(String[] args)  {

		//create Calculator Object
		Calculation calculator = connectToRemote(args);
		System.out.println("The greatest common divisor of 100 und 15 is "+calculator.ggt(100.0,15.0));	
	}

	public static Calculation connectToRemote(String[] args) {
		try {

			/* Erstellen und intialisieren des ORB */
			ORB orb = ORB.init(args, null);

			/* Erhalten des RootContext des angegebenen Namingservices */
			Object o = orb.resolve_initial_references("NameService");

			/* Verwenden von NamingContextExt */
			NamingContextExt rootContext = NamingContextExtHelper.narrow(o);

			/* Angeben des Pfades zum Calculate Objekt */
			NameComponent[] name = new NameComponent[2];
			name[0] = new NameComponent("test","my_context");
			name[1] = new NameComponent("Calculation", "Object");

			/* Aufloesen der Objektreferenzen  */
			return CalculationHelper.narrow(rootContext.resolve(name));

		}	catch (Exception e)	{
			System.err.println("Es ist ein Fehler aufgetreten: " + e.getMessage());
			e.printStackTrace();
			
			return null;
		}

	}

}
