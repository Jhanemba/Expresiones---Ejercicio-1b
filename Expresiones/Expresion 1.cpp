/*
Ejercicio 1: Escribe la siguiente expresión como expresión en C++:
"a" sobre "b" más uno.
*/

#include <iostream>
using namespace std;

int main()
{
	double a, b;
	double resultado = 0;

	cout << "\n\nEste programa realizara la siguiente expresion: a/b + 1 \n\n";
	cout << "Introduzca a: \n"; cin >> a;
	cout << "Introduzca b: \n"; cin >> b;

	resultado = (a / b) + 1;

	cout.precision(3);
	cout << "\nEl resultado es: " << resultado;


	return 0;
}