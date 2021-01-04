
#include <iostream>
#include <conio.h>
#include "CircularQueue.h"

using namespace std;

int main()
{

	CircularQueue bakeryQueue( 7 ) ;

	bakeryQueue.enqueue( 1 ) ;
	bakeryQueue.enqueue( 2 ) ;
	bakeryQueue.enqueue( 3 ) ;
	bakeryQueue.enqueue( 4 ) ;
	bakeryQueue.enqueue( 5 ) ;
	bakeryQueue.enqueue( 6 ) ;
	bakeryQueue.enqueue( 7 ) ;
	bakeryQueue.enqueue( 8 ) ;

	cout << "\n CurrenSize : " << bakeryQueue.currentSizeOfQueue() << endl ;

	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;
	bakeryQueue.dequeue() ;

	cout << "\n CurrenSize : " << bakeryQueue.currentSizeOfQueue() << endl ;

	getch() ;
	return 0 ;
}