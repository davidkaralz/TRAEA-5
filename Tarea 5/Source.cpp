#include <iostream>
#include <cmath>
#include "circle.h"
#include "square.h"
#include "triangle.h"

using namespace std;



int main() {
	int opcion;
	float perimetro;
	cout << "Elija la figura a la que le calculara el perimetro\n";
	cout << "1 para circulo\n";
	cout << "2 para cuadrado\n";
	cout << "3 para triangulo\n";
	cout << "Cualquier otra opcion cierra el programa\n";
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		perimetro=circle::compute_perimeter();
		cout << "el perimetro del circulo es: " << perimetro << "\n";
		break;
	case 2:
		perimetro = square::compute_perimeter();
		cout << "el perimetro del cuadrado es: " << perimetro << "\n";
		break;
	case 3:
		perimetro = triangle::compute_perimeter();
		cout <<"el perimetro del triangulo es: "<< perimetro << "\n";
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}


