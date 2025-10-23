#include <iostream>
#include "Employee.h"

using namespace std;

int main() {

	Parttime parttimer("1234", 10.00, 15.00);
	Fulltime fulltimer("7890",50000.00,2000.00);
	
	//a pointer stores the memory adddress of another variable
	//these are pointers, needs (*), and (&) assigns address
	Parttime* part = &parttimer; 
	Fulltime* full = &fulltimer;
	
	//instead of (.), pointers use (->)
	part->print();
	cout << "\n";
	full->print();

}
