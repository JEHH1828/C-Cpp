//Hernández Huerta José Emilio  IMC12
//Fundamentos de Programación

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
  cout << ("Ingresa la fecha actual ") << endl;
  int dia, mes, año ;
  
  cout<< ("Ingresa el dia") << endl;
  cin >> dia ;
  cout<< ("Ingresa el mes") << endl;
  cin >> mes;
  cout<< ("Ingresa el año") << endl;
  cin >> año;

  int a, b; 

  cout << ("Ingresa 2 numeros para ser sumados ") << endl;
  cout<< ("Ingresa el primer numero") << endl;
  cin >> a;
  cout<< ("Ingresa el segundo numero") << endl;
  cin >> b;
  int c = a + b;
  system("Pause");
  cout << ("El resultado es ") << c <<endl;
  
  cout << ("La fecha es ") << dia << ("/") << mes << ("/") << año ; 

  return 0;
}
/*
No cuenta con una forma para vereficar el tipo de la variable
por lo que si se añaden datos que no sean enteros el programa 
finalizara abruptamente
*/
