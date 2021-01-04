
#include <iostream>
#include <conio.h>

using namespace std;

class CircularQueue
{

public:
	CircularQueue() ;
	CircularQueue( int queueSize ) ;
	void enqueue( int element ) ;
	void dequeue() ;
	int currentSizeOfQueue() ;

private:
	int rear ;
	int forward ;
	int queueSize ;
	int* node ;
	
};