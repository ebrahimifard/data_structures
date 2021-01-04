#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Node.h"

using namespace std;

class Manager
{

public:
	Manager() ;
	void addAtFirst( int element ) ;
	void addAtLast( int element ) ;
	void deleteFirst() ;
	void deleteLast() ;
	bool isEmpty() ;
	int currentSize() ;
	void push( int n ) ;
	void pop() ;
	void top() ;
	
	

private:
	Node* header ;

};

#endif