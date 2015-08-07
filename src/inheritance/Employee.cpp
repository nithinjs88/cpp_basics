/*
 * Employee.cpp
 *
 *  Created on: 24-Jun-2015
 *      Author: nithin
 */


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Employee {
private:
	int id;
	static int count;

public:
	static const int MAX = 100;
	Employee():id(0) {
		count++;
		cout<<"Employee no arg const"<<endl;
	}

	Employee(int id):id(id) {
		count++;
		cout<<"Employee 1 arg const"<<endl;
	}

	~Employee() {
		cout<<"Employee dest of id "<<id<<endl;
	}

	void toString() {
		cout<<"Id is "<<id<<endl;
	}

	virtual void printBenefit() {
		cout<<"EMp Benefit"<<endl;
	}
	static void printCount() {
		cout<<"Count is "<<count<<endl;
	}

	bool operator < (Employee& emp) {
		return id < emp.id;
	}

	int getId() const {
		return id;
	}
};

class GovEmployee: public Employee {
public:
	int a = 100;
	GovEmployee() {
		cout<<"GovEmployee no arg const"<<endl;
	}

	GovEmployee(int id):GovEmployee() {
		cout<<"GovEmployee 1 arg const"<<endl;
	}

	~GovEmployee() {
		cout<<"GovEmployee dest"<<endl;
	}

	void printBenefit() {
		cout<<"Govemp Benefit"<<endl;
	}

	void leave() {
			cout<<"leave "<<a<<endl;
	}

};

class PvtEmployee: public Employee {
public:
	int a = 100;
	PvtEmployee() {
		cout<<"PvtEmployee no arg const"<<endl;
	}

	PvtEmployee(int id):PvtEmployee() {
		cout<<"PvtEmployee 1 arg const"<<endl;
	}

	~PvtEmployee() {
		cout<<"PvtEmployee dest"<<endl;
	}

	void printBenefit() {
		cout<<"Pvtemp Benefit"<<endl;
	}

	void leave() {
			cout<<"leave "<<a<<endl;
	}

};

int Employee::count = 0;

class CompareEmpPtr {
public:
	bool operator () ( Employee* ptr1,  Employee* ptr2) {
		return (ptr1->getId() < ptr2->getId());
	}
} cmpEmpPtr;
/*
int main(int argc, char **argv) {
	vector<Employee*> vectPtr;
	vector<Employee> vect;
	Employee emp1(100);
	vectPtr.push_back(&emp1);
	vect.push_back(emp1);
	Employee emp2(50);
	vectPtr.push_back(&emp2);
	vect.push_back(emp2);
	Employee emp3(10);
	vectPtr.push_back(&emp3);
	vect.push_back(emp3);

	cout<<"sort vect"<<endl;
	sort(vect.begin(),vect.end());
	vect.at(2).toString();

	cout<<"sort vect ptr"<<endl;

	sort(vectPtr.begin(),vectPtr.end(),cmpEmpPtr);
	vectPtr.at(2)->toString();

	cout<<binary_search(vectPtr.begin(),vectPtr.end(),&emp1,cmpEmpPtr);
	cout<<"End main"<<endl;
}
*/
/*
int main(int argc, char **argv) {

	Employee emp(10);
	emp.toString();

	Employee emp1;
	emp1.toString();

	GovEmployee emp2;
	emp2.toString();

	GovEmployee emp3(10);
	emp3.toString();

	Employee *e = new GovEmployee();
	Employee e1 = *e;
	e1.printBenefit();
	cout<<"MAX is "<<Employee::MAX<<endl;


	Employee *emp = new Employee();
	GovEmployee *govEmp =new GovEmployee();
	PvtEmployee *pvtEmp = new PvtEmployee();
	//p/*vtEmp = static_cast<PvtEmployee *>(govEmp);
}

*/
