/*
 * Cat.cpp
 *
 *  Created on: 21-Jun-2015
 *      Author: nithin
 */
#include "Cat.h"

#include <iostream>
using namespace std;

void Cat:: speak() {
	if(happy)
		cout<<"Meouww..";
	else
		cout<<"Sss...";
	cout<<endl;
}

Cat:: Cat() {
	cout<<"Created cat"<<endl;
	happy = true;
}

Cat:: Cat(bool happy) {
	this->happy = happy;
}

Cat:: ~Cat() {
	cout<<"Destroyed cat"<<endl;
}

void Cat:: jump() {
	cout<<"jump.."<<endl;
}


