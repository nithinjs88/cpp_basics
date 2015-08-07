/*
 * Person.cpp
 *
 *  Created on: 21-Jun-2015
 *      Author: nithin
 */

#include "Human.h"
#include <iostream>
#include <sstream>

using namespace std;
Human::Human() {
	cout<<"default constructor"<<endl;
}

Human::~Human() {
	cout<<"default destructor"<<endl;
}

Human::Human(string name, int age) {
	cout<<"2 parameterized constructor"<<endl;
	this->name = name;
	this->age = age;
}

void Human:: operator = (const Human& other) {
	cout<<"copy assignment operator"<<endl;
	if(this != &other) {
		name = other.name;
		age = other.age;
	}
	//return *this;
}

Human::Human(const Human& human) {
	cout<<"Copy const"<<endl;
}

string Human::toString () const {
	stringstream ss;
	ss<<"Name : "<<name<< ", age "<<age;
	return ss.str();
}

