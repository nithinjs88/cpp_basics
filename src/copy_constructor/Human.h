/*
 * Person.h
 *
 *  Created on: 21-Jun-2015
 *      Author: nithin
 */
#include <iostream>
#ifndef OOPS_HUMAN_HUMAN_H_
#define OOPS_HUMAN_HUMAN_H_

using namespace std;
class Human {
private:
	string name;
	int age;
public:

	string toString() const;


	Human();
	~Human();
	Human(string name,int age);
	Human(const Human& human);
	void operator = (const Human& other);
};

#endif /* OOPS_PERSON_PERSON_H_ */
