#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Node.h"
#include <vector>
#include <cmath>
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
	void deleteAt( int n ) ;
	void deleteAfter( int n ) ;
	void deleteAfter2( Node* y ) ;
	void purgeList() ;
	void recursive_reverse( Node* p ) ;//not comp
	bool isEmpty() ;
	int currentSize() ;
	Node* getHeader() ;
	void dupWithPerNode( Node* p ) ;
	void findAndDeleteMax() ;
	void findMax() ;
	void sort() ;
	void Josepheos() ; 
	void changeNodes( int p , int q ) ;



	

private:
	Node* header ;
	int max ;

};

#endif