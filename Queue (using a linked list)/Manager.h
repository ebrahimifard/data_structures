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
	void enqueue( int n ) ;
	void dequeue() ;

	

private:
	Node* header ;

};

#endif