//Dada una terna de numeros naturales que representan el dia, el mes y el ano de una determinada fecha informarla como un solo numero natural de 8 digitos (aaaammdd)

#include <iostream> 
using namespace std; 

int main()
{
	int dia; 
	int mes; 
	int ano; 

	int fecha; 

	
	cout << "Ingrese el dia" << endl; 
	cin >> dia;		

	cout << "ingrese el mes" << endl;
	cin >> mes; 

	cout << "ingrese el ano" << endl;
	cin >> ano; 
	
	fecha = ano * 10000 + mes * 100 + dia; 

	cout << "La fecha es: " << fecha; 

	return 0; 

}
