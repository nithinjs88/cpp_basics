/*
 * DivByZeroException.h
 *
 *  Created on: 25-Jun-2015
 *      Author: nithin
 */

#ifndef EXCEPTION_DIVBYZEROEXCEPTION_H_
#define EXCEPTION_DIVBYZEROEXCEPTION_H_

#include <exception>

class DivByZeroException: public std::exception {
public:
	DivByZeroException();
	~DivByZeroException() throw ();
	const char* what() const throw ();
};

#endif /* EXCEPTION_DIVBYZEROEXCEPTION_H_ */
