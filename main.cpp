#include <iostream>
#include "milibreria.h"


using namespace std;
int main()
{


	cout << " Particiones de equivalencia " << endl;
	cout << "Valores en 0 y negativos inválidos "<<endl;
	cout<< " Rendimiento de 0:"<<endl;
	obtiene_rendimiento(0);
	cout << "\n Rendimiento de -9: ";
	obtiene_rendimiento(-9);
	cout << "\n Valores positivos válidos";
	cout<< " Rendimiento de 8:"<<endl;
	obtiene_rendimiento(8);


	

	cout << " Análisis de valores límite\n" << endl;
	cout << " Menor a 1 (0):"<<endl;
	obtiene_rendimiento(0);
	cout << "\n Balance de 1: ";
	obtiene_rendimiento(1);
	cout << "\nBalance menor a 1000 (999): ";
	obtiene_rendimiento(999);
	cout << " \n Balance de 1000: ";
	obtiene_rendimiento(1000);
	cout << "\nBalance entre 1000 y 10000 (1001): ";
	obtiene_rendimiento(1001;
	cout << "\n Balance mayor a 10000 (10001): ";
	obtiene_rendimiento(10001);
	return 0;
}