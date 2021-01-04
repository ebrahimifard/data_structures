
#include <iostream>
#include <conio.h>
#include "Stack.h"

using namespace std ;

int main()
{

	Stack chah(2);
	cout << chah.currentSize() ;
	chah.push( 1 ) ;
	chah.push( 2 ) ;
	chah.push( 3 ) ;
	chah.push( 4 ) ;
	chah.push( 5 ) ;

	cout << endl << "##"  << chah.currentSize() ;	

	cout << endl << chah.pop() ;
	cout << endl << chah.pop() ;
	cout << endl << chah.pop() ;
	cout << endl << chah.pop() ;
	cout << endl << chah.pop() ;
	cout << endl << chah.pop() ;

	cout << endl << chah.currentSize() ;	



	getch() ;
	return 0 ;
}