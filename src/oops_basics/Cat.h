/*
 * Cat.h
 *
 *  Created on: 21-Jun-2015
 *      Author: nithin
 */

#ifndef OOPS_BASICS_CAT_H_
#define OOPS_BASICS_CAT_H_

class Cat {

private:
	bool happy = false;
public:
	Cat();
	Cat(bool happy);
	~Cat();
	void speak();
	void jump();

};



#endif /* OOPS_BASICS_CAT_H_ */
