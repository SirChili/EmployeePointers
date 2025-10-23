#include "Employee.h"

//setters and getters for Employee ID
void Employee::setEmployeeID(string i)
{
	employeeID = i;
}

string Employee::getEmployeeID()
{
	return employeeID;
}

//Employee function and overload
Employee::Employee() = default;

Employee::Employee(string i)
{
	employeeID = i;
}

//Fulltime Functions

float Fulltime::calculatePay()
{
	return bonus + salary;
}

void Fulltime::setBonus(double b)
{
	bonus = b;
}

float Fulltime::getBonus()
{
	return bonus;
}

void Fulltime::setSalary(double s)
{
	salary = s;
}

float Fulltime::getSalary() {
	return salary;
}

void Fulltime::print()
{
	cout << "Full Time Employee ID: " << getEmployeeID() << "\n";
	cout << "Annual Pay: " << calculatePay() << "\n";
}

Fulltime::Fulltime() = default;

Fulltime::Fulltime(string i, float b, float s)
{
	employeeID = i;
	bonus = b;
	salary = s;
}

//Parttime Functions
float Parttime::calculatePay()
{
	return hours * rate;
}

void Parttime::setHours(float h)
{
	hours = h;
}

float Parttime::getHours()
{
	return hours;
}

void Parttime::setRate(float r)
{
	rate = r;
}

float Parttime::getRate()
{
	return rate;
}


void Parttime::print()
{
	cout << "Part Time Employee ID: " << getEmployeeID() << "\n";
	cout << "Weekly Pay: " << calculatePay() << "\n";
}

Parttime::Parttime() = default;

Parttime::Parttime(string i,float h,float r)
{
	employeeID = i;
	hours = h;
	rate = r;
}
