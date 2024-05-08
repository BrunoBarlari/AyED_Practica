#include <iostream>
using namespace std;


int main()
{
	int numero_1;
	int numero_2;

	cout << "Ingrese 2 valores enteros" << endl;
	cout << "Primer valor: " << endl;
	cin >> numero_1;
	cout << "Segundo valor: " << endl; 
	cin >> numero_2; 


	int suma = numero_1 + numero_2;
	int resta = numero_1 - numero_2;
	int producto = numero_1 * numero_2;

	cout << "La suma es: " << suma << endl; 
	cout << "La diferencia es: " << resta << endl; 
	cout << "El producto es: " << producto << endl; 

	return 0; 
}
