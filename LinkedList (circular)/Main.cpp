
#include <iostream>
#include <conio.h>
#include "Node.h"
#include "ManagingList.h"

using namespace std ;

int main()
{
	ManagingList fergosen ;
	

	fergosen.addAtLast( 6 ) ;
	fergosen.removeFirst() ;
	fergosen.addAtFirst( 7 ) ;
	fergosen.addAtFirst( 8 ) ;
	fergosen.removeLast() ;
	fergosen.addAtLast( 9 ) ;
	fergosen.addAtFirst( 1 ) ;
	fergosen.addAtLast( 4 ) ;
	fergosen.addAtFirst( -8 ) ;
	fergosen.removeLast() ;
	fergosen.addAtFirst( 2 ) ;

	getch() ; 
	return 0 ;

}