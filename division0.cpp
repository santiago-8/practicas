/* Programa para dividir números enteros utilizando restas sucesivas */

#include<iostream>

using namespace std;

int dividendo=1,divisor=1,resultado,diferencia;

int main()
{
	cout << "** ¡Hola! Este es un programa para dividir números naturales **" << endl << endl;		
	cout <<  "Ingrese 0 en cualquier momento para salir." << endl ;  /* Menú del programa */

	while ( dividendo > 0 && divisor > 0 )					/* Si el dividendo y el divisor son mayores a 0,ejecuta el bloque de instrucciones */
	{	
	cout << endl << "Ingrese el dividendo: " ;

	cin >> dividendo;

	if (dividendo < 1 ) break;						/* Si se ingresa 0 o menor como dividendo , corta el bucle y sale del programa */

	cout << endl << "Ingrese el divisor: " ;

	cin >> divisor;

	if (divisor < 1 ) break;						/* Si se ingresa 0 o menor como divisor, corta el bucle y sale del programa */
	
	cout << endl << dividendo << " / " << divisor;
	
		for ( resultado = 0 ; dividendo >= divisor; resultado++)	/* Realiza la operación de división restando sucesivamente */
		{
		       for ( diferencia = 0 ; (diferencia + divisor) < dividendo ; diferencia ++ )	/* Realiza la operación de resta sumando sucesivamente */
		       {
		       }

		       dividendo = diferencia;
		}

	cout <<  " = " << resultado ;						/* Muestra el resultado y el resto */
	cout << "    Resto : " << dividendo << endl;

	}
return 0;
}

 /* Descripción: al dividendo se le va restando el divisor hasta que el dividendo sea mas pequeño que el divisor. Una vez que esto ocurre, se cuentan la cantidad de restas que se tuvieron que realizar.
 * Para restar, se debe comenzar con el valor del divisor e ir sumandole 1 sucesivamente hasta que llegue a ser igual que el dividendo. La cantidad de veces que se tenga que sumar 1, es nuestro
 * resultado. */ 
