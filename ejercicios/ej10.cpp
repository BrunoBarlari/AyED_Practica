#include <iostream>
using namespace std; 

int main()
{
	int numero_1;
	int numero_2;
	int suma = 0;

	cout << "Ingrese 2 valores enteros: " << endl;
	cin >> numero_1;
	cin >> numero_2;
	
	for (int x = 0; x < numero_2; x++){
		suma += numero_1;
	}

	cout << "El producto es: " << suma << endl;


	return 0; 
}
