/*
 * linklist.cpp
 *
 *  Created on: 24-Jun-2015
 *      Author: nithin
 */
#include <iostream>
using namespace std;

template <class T>
class Node {

public:
	Node<T> *next;
	T data;

	Node() : next(NULL) {

	}

	Node(T data): Node() {
		this->data = data;
	}

	virtual ~Node() {
		cout<<"Destroying data "<<data<<endl;
		//void* dataPtr = static_cast<void*>(data);
	}
};

template <class T>
class LinkList {
	Node<T> *head;

public:

	virtual ~LinkList() {
		cout<<"Destroying linklist "<<endl;
		Node<T> *ptr = head;
		Node<T> *preVPtr = NULL;
		while(ptr != NULL) {
			preVPtr = ptr;
			delete preVPtr;
			ptr = ptr->next;

		}
		//head to null to prevent dangling pointers
		head = NULL;
	}

	void add(T data) {
		if(head == NULL) {
			head = new Node<T>(data);
		} else {
			Node<T> *ptr = head;
			Node<T> *prevPtr = head;
			while(ptr != NULL) {
				prevPtr = ptr;
				ptr = ptr->next;
			}
			prevPtr->next = new Node<T>(data);
		}
	}

	T getEleAtIdx(int idx) {
		Node<T> *ptr = head;
		int itr = 0;
		while(ptr != NULL) {
			if(itr == idx) {
				break;
			}
			ptr = ptr->next;
			itr++;
		}
		if(ptr == NULL) {
			return NULL;
		} else {
			return ptr->data;
		}
	}
};

