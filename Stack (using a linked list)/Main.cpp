
#include <iostream>
#include <conio.h>
#include "Node.h"
#include "Manager.h"


using namespace std ;

int main()
{
	Manager fergosen ;

	fergosen.push( 10 ) ;
	fergosen.push( 9 ) ;
	fergosen.push( 8 ) ;
	fergosen.push( 7 ) ;
	fergosen.push( 6 ) ;
	fergosen.push( 5 ) ;
	fergosen.push( 4 ) ;
	fergosen.push( 3 ) ;
	fergosen.push( 2 ) ;
	fergosen.push( 1 ) ;
	cout << endl <<"--------------------"<<endl ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	fergosen.top() ;
	cout << endl <<"--------------------"<<endl ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.pop() ;
	fergosen.top() ;


	 





	

	getch() ; 
	return 0 ;

}