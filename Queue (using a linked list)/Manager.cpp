
#include "Manager.h"

Manager::Manager()
{
	header = new Node() ;
	header->setNext( 0 ) ;
}

void Manager::addAtFirst( int element ) 
{
	Node* newNode = new Node( element , header->getNext() ) ;
	header->setNext( newNode ) ;
}

void Manager::addAtLast( int element )
{
	Node *p = header ;
	while( p->getNext() != 0 )
	{
		p = p->getNext() ;
	}
	Node* newNode = new Node( element , p->getNext() /*or 0*/ ) ;
	p->setNext( newNode ) ;
}

int Manager::currentSize()
{
	int size = 0 ;
	Node* p = header ;
	while( p->getNext() != 0 )
	{
		p = p->getNext() ;
		size++ ;
	}
	
	return size ;
}

bool Manager::isEmpty()
{
	bool flag ;
	if ( currentSize() == 0 )
		flag = true ;
	else
		flag = false ;

	return flag ;
}



void Manager::deleteFirst()
{
	if( currentSize() == 0 )
		cout <<"\n  The error has been occured";
	else
	{
		Node *p = header->getNext() ;
		header->setNext( p->getNext() ) ;
		delete p ;
	}

}



void Manager::deleteLast()
{
	if( currentSize() == 0 )
		cout << "\n  The error has been occured" ;
	else
	{
		Node* p = header ;
		while( p->getNext()->getNext() != 0 )
		{
			p = p->getNext() ;
		}

		Node* q = p->getNext() ;
		p->setNext( q->getNext() ) ;
		delete q ;
	}
}

void Manager::enqueue( int n )
{
	this->addAtLast( n ) ;
}

void Manager::dequeue()
{
	if( this->isEmpty() )
	{
		cout <<"\n  Your Queue is empty";
	}
	else
	{
		cout<<"\n  "<<header->getNext()->getElement() ;
		this->deleteFirst() ;
	}
}
