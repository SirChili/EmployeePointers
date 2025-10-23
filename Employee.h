#pragma once
#include <iostream>
using namespace std;

//An abstract class is a class with
//one or more virtual functions
class Employee
{
protected:
	string employeeID;

public:
	virtual float calculatePay() = 0;

	void setEmployeeID(string i);
	string getEmployeeID();

	virtual void print() = 0;

	Employee();
	Employee(string i);
	
};

class Fulltime : public Employee {
protected:
	float bonus;
	float salary;

public:
	float calculatePay();

	void setBonus(double b);
	float getBonus();

	void setSalary(double s);
	float getSalary();

	void print();
	Fulltime();
	Fulltime(string i, float b, float s);

};

class Parttime : public Employee {
protected:
	float hours;
	float rate;

public:
	float calculatePay();

	void setHours(float h);
	float getHours();

	void setRate(float r);
	float getRate();

	void print();

	Parttime();
	Parttime(string i, float h,float r);

};