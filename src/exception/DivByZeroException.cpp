/*
 * DivByZeroException.cpp
 *
 *  Created on: 25-Jun-2015
 *      Author: nithin
 */

#include "DivByZeroException.h"

DivByZeroException::DivByZeroException() {
	// TODO Auto-generated constructor stub

}

DivByZeroException::~DivByZeroException() throw () {
	// TODO Auto-generated destructor stub
}

const char* DivByZeroException:: what() const throw (){
	return "div by zero";
}
