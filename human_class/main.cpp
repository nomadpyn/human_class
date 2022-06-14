#include<iostream>
#include"human.h"
using namespace std;

int main() {

	Human a;

	a.print();
	a.setId(1);
	a.setFname("Hrenova");
	a.setName("Gadya");
	a.setSname("Petrovich");
	a.setData(12, 5, 1990);
	a.print();
	Human b(2, "Ivanov", "Ivan", "Ivanovich", 28, 2, 1985);
	b.print();
	Human c;
	c.print();
	return 0;
}