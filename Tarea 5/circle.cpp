#include <iostream>

using namespace std;

struct { int x, y; } punto;
namespace circle{

	float compute_perimeter(){
		float radio;
		cout << "Inserte el valor del radio del circulo:\n";
		cin >> radio;
		cout << "Inserte las coordenadas X y Y del punto:\n";
		cin >> punto.x >> punto.y;
		const float PI = 3.1416;
		return (2 * PI*radio);
	}
}