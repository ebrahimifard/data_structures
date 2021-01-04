#include "CircularQueue.h"


CircularQueue::CircularQueue()
{
	rear = 0 ; 
	forward = 0 ;
	queueSize = 100 ;
	node = new int[queueSize] ;
	
	for( int i=0 ; i<queueSize ; i++ )
	{
		node[ i ] = -7 ;
	}
	
}

CircularQueue::CircularQueue( int queueSize )
{
	rear = 0 ;
	forward = 0 ;
	this->queueSize = queueSize ;
	node = new int[ queueSize ] ;

	for( int i=0 ; i<queueSize ; i++ )
	{
		node[ i ] = -7 ;
	}
	
}

void CircularQueue::enqueue( int element )
{
	if( this->currentSizeOfQueue() != queueSize - 1 ) 
	{
		node[ rear ] = element ;
		rear ++ ;
	}
	else 
	{
		cout << "\n Your queue was completed!\n" ;

	}
	
}


void CircularQueue::dequeue()
{

	if( this->currentSizeOfQueue() != 0 )
	{
		int holder ;
		holder = node[ forward ] ;
		node[ forward ] = -7 ; 
		forward++ ;
		cout << holder ;
	}

	else
	{
		cout << "\n Your queue is empty!\n" ; 
	}


}

int CircularQueue::currentSizeOfQueue()
{
	return ( (queueSize - forward + rear) % queueSize ) ; 
}

