// Transforma temperaturas de celsius <-> kelvin
#include <iostream>
using namespace std;
int main()
{
   int opcion;
   double celsius, kelvin;
   
   do{
	   cout << "Este programa transforma temperaturas.\n";
	   cout << "Elija una opcion:\n";
	   cout << "1. De grados celsius a grados kelvin.\n";
	   cout << "2. De grados kelvin a grados celsius.\n\n";
	   cout << "Por favor, introduzca su opcion (1 o 2): ";
	   cin >> opcion;
	   switch(opcion)
	   {
	   	  case 0:
	   	  	break;
	      case 1: // paso de Celsius a Kelvin
	         cout << "Introduzca la temperatura en grados Celsius: ";
	         cin >> celsius;
	         if (celsius >= -273)
	         {
	            kelvin = celsius + 273;
	            cout << celsius << " grados C son " << kelvin << " grados K.\n";
	         }
	         else
	            cout << "Temperatura por debajo del cero absoluto.\n";
	         break;
	      case 2: // paso de Kelvin a Celsius
	         cout<<"Introduzca la temperatura en grados kelvin:\n";
	         cin >> kelvin;
	         if (kelvin >= 0)
	         {
	            celsius = kelvin - 273;
	            cout << kelvin << " grados K son " << celsius << " grados C.\n";
	         }
	         else
	            cout << "Temperatura por debajo del cero absoluto.\n";
	         break;
	      default:
	         cout << "La opcion escogida no es válida.\n";
	   }
	}while(opcion!=0);
	
	cout<<"Hasta luego!";
}
