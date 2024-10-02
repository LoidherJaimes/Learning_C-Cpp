// Bucle controlado por un contador que suma un
// determinado conjunto de reales. (Versión 1)

#include <iostream>
using namespace std;

int main()
{
   cout << "Introduzca cuantos números reales quiere sumar: ";
   int contador;
   cin >> contador;

   if (contador > 0)
   {
      double suma = 0.0;
      while (contador > 0)
      {
         cout << "Deme valor real a sumar: ";
         double valor;
         cin >> valor;
         suma += valor;  // Equivalente a suma = suma + valor
         contador -= 1;  // Equivalente a contador = contador - 1
      }
      cout << "La suma de los números introducidos es " << suma << endl;
   }
   else
      cout << "No se introdujeron números para realizar la suma.\n";
}
