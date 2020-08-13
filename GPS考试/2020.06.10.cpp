#include"БъЭЗ.h"
#include"Car.h"
#include"Gps.h"
int main() {
	Car* car = new Car("GTR");
	Gps * gps = new Gps();
	car->move(*gps);


	return 0;

}