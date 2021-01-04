#ifndef MANAGINGLIST_H
#define MANAGINGLIST_H


#include "Node.h"
#include <iostream>
#include <conio.h>

using namespace std ;


class ManagingList
{
	
public:
	ManagingList() ;
	void addAtFirst( int data ) ;
	void addAtLast( int data ) ;
	void removeFirst() ;
	void removeLast() ;

private:
	Node* header ; 

};

#endif