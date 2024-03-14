#include <iostream>

using namespace std;

class Plane {
public:
	std::string name;
	int speed;
	double length;
	double height;
	int capacity;
};

int main() {
	const int size = 5;

	Plane plane1;
	Plane planes[size];

	planes[0].name = "Airbus";
	planes[0].speed = 1100;

	plane1.name = "Boeing 747-400";
	plane1.speed = 900;
	plane1.length = 70.66;
	plane1.height = 19.41;
	plane1.capacity = 700;
	return 0;
}