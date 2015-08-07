#include <iostream>
using namespace std;

template <class K,class V>
class KeyValuePair {
public:
	K* key;
	V* value;

	KeyValuePair():key(NULL),value(NULL) {

	}

	virtual ~KeyValuePair(){

	}

	KeyValuePair(K* k, V* v) {
		key = k;
		value = v;
	}

	virtual K* getKey() {
		cout<<"Get key of KeyValuePair<K,V> class"<<endl;
		return key;
	}

	virtual V* getValue() {
		cout<<"Get value of KeyValuePair<K,V> class"<<endl;
		return value;
	}

};
template <>
class KeyValuePair<int,string> {
public:
	int* key;
	string* value;
	KeyValuePair(int* k, string* v) {
		key = k;
		value = v;
	}

	int* getKey() {
		cout<<"Get key of KeyValuePair<int,string> class"<<endl;
		return key;
	}

	string* getValue() {
		cout<<"Get value of KeyValuePair<int,string> class"<<endl;
		return value;
	}

	void print() {
		cout<<"print of KeyValuePair"<<endl;
	}
};
template<class V>
class IntValuePair : public KeyValuePair<int,V> {
public:
	IntValuePair(int *key,V *value):KeyValuePair<int,V>(key,value) {
		cout<<"2 arg constructor of IntValuePair"<<endl;
	}
	virtual ~IntValuePair(){

	}
};
class IntInt : public KeyValuePair<int,int> {
public:
	IntInt(int *key,int *value):KeyValuePair<int,int>(key,value) {
		cout<<"2 arg constructor of IntInt"<<endl;
	}
	virtual ~IntInt(){

	}
	int* getKey() {
		cout<<"Get key of IntInt class"<<endl;
		return key;
	}

	int* getValue() {
		cout<<"Get value of IntInt class"<<endl;
		return value;
	}

};
int main(int argc, char **argv) {
	int t1 = 10;
	string t2 = "hai";
	int t3 = 40;
	KeyValuePair<int,int> kv(&t1,&t3);
	kv.getKey();

	KeyValuePair<int,int>* ptr = new IntValuePair<int>(&t1,&t3);
	cout<<*(ptr->getKey())<<" "<<*(ptr->getValue())<<endl;
}

