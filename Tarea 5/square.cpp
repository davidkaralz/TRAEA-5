#include <iostream>
#include <cmath>
using namespace std;


namespace square{

	struct { float x, y; } p1, p2, p3, p4;

	float compute_perimeter(){
		cout << "Inserte las coordenadas X y Y del punto 1:\n";
		cin >> p1.x >> p1.y;
		cout << "Inserte las coordenadas X y Y del punto 2:\n";
		cin >> p2.x >> p2.y;
		cout << "Inserte las coordenadas X y Y del punto 3:\n";
		cin >> p3.x >> p3.y;
		cout << "Inserte las coordenadas X y Y del punto 4:\n";
		cin >> p4.x >> p4.y;
		float d1 = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
		float d2 = sqrt(pow((p3.x - p2.x), 2) + pow((p3.y - p2.y), 2));
		float d3 = sqrt(pow((p4.x - p3.x), 2) + pow((p4.y - p3.y), 2));
		float d4 = sqrt(pow((p1.x - p4.x), 2) + pow((p1.y - p4.y), 2));
		return d1 + d2 + d3 + d4;
	}
}