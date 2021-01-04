
#include "Stack.h"



Stack::Stack()
{

	node = new int[ 100 ] ;
	stackSize = 100 ;
	header = -1 ;

}



Stack::Stack( int size ) 
{

	node = new int [ size ] ;
	stackSize = size ;
	header = -1 ;

}


void Stack::push( int newElement )
{

	header++ ;
	node[ header ] = newElement ;

}

int Stack::pop()
{

	if( isEmpty() )
	{
		cout << "\n  Your stack is empty";
	}
	else
	{
		int temp ;
		temp = node[ header ] ;
		header-- ;
		return temp ;
	}

}


bool Stack::isEmpty()
{
	if( currentSize() == 0 )
		return true ;
	else
		return false ;
}



int Stack::currentSize()
{
	return header+1 ;
}
