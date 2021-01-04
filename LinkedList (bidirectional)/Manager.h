#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Node.h"
#include <vector>
#include <algorithm>
#include <stack>


using namespace std;

class Manager
{

public:
	Manager() ;
	void addAtFirst( int element ) ;
	void addAtLast( int element ) ;
	void deleteFirst() ;
	void deleteLast() ;
	void insertAfter( int element , int n ) ;
	void deleteAfter( int n ) ;
	void deleteAfter2( Node* y ) ;
	void purgeList() ;
	void recursive_reverse( Node* p ) ;//not comp
	bool isEmpty() ;
	int currentSize() ;
	Node* getHeader() ;
	void dupWithPerNode( Node* p ) ;//not comp
	void findAndDeleteMax() ;//not comp
	void findMax() ;////not comp
	void sort() ;////not comp
	void Josepheos() ; //not comp



	

private:
	Node* header ;
	int max ;

};

#endif