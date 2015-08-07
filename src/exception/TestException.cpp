#include <iostream>
using namespace std;
#include "DivByZeroException.h"

int divide(int no1,int no2) throw(DivByZeroException,int,const char *){
	if(no2 == 0) {
		DivByZeroException a1;
		throw a1;
	} else if(no2 > 100) {
		throw no2;
	}
	throw "abc";
	return no1/no2;
}

/* catch( const char* ii) {
		cout <<"const char*"<<endl;
	}*/
/*
int main(int argc, char **argv) {
	try {
		cout<<divide(2,5);
	} catch (DivByZeroException& e) {
		cout<<"hai "<<e.what()<<endl;
	} catch(int i) {
		cout <<i<<endl;
	} catch( const char* ii) {
		cout <<"const char*"<<endl;
	} catch(char const* ii) {
		cout <<"char const*"<<endl;
	} catch(...) {
		cout<<"some other issue";
	}
}
*/
