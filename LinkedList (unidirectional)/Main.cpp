
#include <iostream>
#include <conio.h>
#include "Node.h"
#include "Manager.h"


using namespace std ;

int main()
{
	Manager fergosen ;

	//for( int i = 0 ; i < 10 ; i++ )
	//{
	//	fergosen.addAtLast( 1 ) ;
	//}
	//fergosen.addAtLast( 1 ) ;
	//fergosen.addAtLast( 5 ) ;
	//fergosen.addAtFirst( -1 ) ;
	//fergosen.addAtFirst( -11 ) ;
	//fergosen.addAtFirst( 9 ) ;
	////fergosen.addAtLast( 1 ) ;
	//fergosen.addAtLast( 5 ) ;
	//fergosen.addAtFirst( -1 ) ;
	//fergosen.addAtFirst( -11 ) ;
	//fergosen.addAtFirst( 9 ) ;
	//fergosen.addAtFirst( 9 ) ;
	/*fergosen.addAtLast( 7 ) ;
	fergosen.addAtLast( 8 ) ;
	fergosen.addAtLast( 0 ) ;
	fergosen.addAtLast( 2 ) ;
	fergosen.deleteAt( 4 ) ;*/
	
	
	//fergosen.addAtFirst( -7 ) ;
	//fergosen.addAtFirst( 50 ) ;

	//fergosen.recursive_reverse( fergosen.getHeader() ) ;
	//fergosen.dupWithPerNode( fergosen.getHeader()->getNext() ) ;
	//fergosen.sort() ;
	//fergosen.recursive_reverse( fergosen.getHeader()->getNext() ) ;
	//fergosen.dupWithPerNode( fergosen.getHeader()->getNext() ) ;
	//fergosen.findAndDeleteMax() ;

	//fergosen.Josepheos() ;

	fergosen.addAtLast( 8 ) ;
	fergosen.addAtLast( 6 ) ;
	fergosen.addAtLast( 4 ) ;
	fergosen.addAtLast( 2 ) ;
	fergosen.addAtLast( 0 ) ;
	fergosen.changeNodes( 3 , 5 ) ;
	

	getch() ; 
	return 0 ;

}