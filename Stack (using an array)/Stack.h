
#include <iostream>

using namespace std ;

class Stack 
{

public:
	Stack() ;
	Stack( int size ) ;
	void push( int newElement ) ;
	int pop() ;
	bool isEmpty() ;
	int currentSize() ;

private :
	int* node ;
	int stackSize ;
	int header ;
};