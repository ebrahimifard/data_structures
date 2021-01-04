
#include "Manager.h"


Manager::Manager()
{
	header = new Node() ;
	header->setNext( header ) ;
	header->setPrev( header ) ;
}

void Manager::addAtFirst( int element ) 
{
	Node* newNode = new Node( element , header , header->getNext() ) ;
	header->getNext()->setPrev( newNode ) ;
	header->setNext( newNode ) ;
}

void Manager::addAtLast( int element )
{
	//Node *p = header ;
	//while( p->getNext() != 0 )
	//{
	//	p = p->getNext() ;
	//}
	//Node* newNode = new Node( element , p->getNext() /*or 0*/ ) ;
	//p->setNext( newNode ) ;
	
	Node* newNode = new Node( element , header->getPrev() , header ) ;
	header->getPrev()->setNext( newNode ) ;
	header->setPrev( newNode ) ;
}

int Manager::currentSize()
{
	int size = 0 ;
	Node* p = header ;
	while( p->getNext() != header )
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

void Manager::insertAfter( int element , int n )
{
	if( isEmpty() || n > currentSize() )
		cout << "\n  The error is occured" ;
	else
	{
		Node* p = header ;
		int counter = 0 ;
		while( counter != n )
		{
			p = p->getNext() ;
			counter++ ;
		}

		Node* newNode = new Node( element , p , p->getNext() ) ;
		p->getNext()->setPrev( newNode ) ;
		p->setNext( newNode ) ;

	}

}


void Manager::deleteFirst()
{
	//if( currentSize() == 0 )
	//	cout <<"\n  The error has been occured";
	//else
	//{
	//	Node *p = header->getNext() ;
	//	header->setNext( p->getNext() ) ;
	//	delete p ;
	//}
	if( header->getNext() != header )
	{ 
		header->getNext()->getNext()->setPrev( header ) ;
		header->setNext( header->getNext()->getNext() ) ;
	}
	else
	{
		cout <<"\n  The error has been occured";
	}


}

void Manager::deleteAfter( int n )
{
	if( isEmpty() || n > (currentSize()-1)  )
		cout << "\n  The error has been occured" ;
	else
	{
		Node* p = header ;
		int counter = 0 ;
		while( counter != n )
		{
			p = p->getNext() ;
			counter++ ;
		}
		Node* q = p->getNext() ;
		p->setNext( q->getNext() ) ;
		q->getNext()->setPrev( p ) ;
		delete q ;

	}

}

void Manager::deleteLast()
{
	//if( currentSize() == 0 )
	//	cout << "\n  The error has been occured" ;
	//else
	//{
	//	Node* p = header ;
	//	while( p->getNext()->getNext() != 0 )
	//	{
	//		p = p->getNext() ;
	//	}

	//	Node* q = p->getNext() ;
	//	p->setNext( q->getNext() ) ;
	//	delete q ;
	//}
	if( header->getNext() != header )
	{
		header->getPrev()->getPrev()->setNext( header ) ;
		header->setPrev( header->getPrev()->getPrev() ) ;
	}
	else
	{
		cout << "\n  The error has been occured" ;
	}
}


void Manager::deleteAfter2( Node* u )
{
	if( u == 0 || u->getNext() == 0 )
	{
		cout <<"\n  The error has been occured" ;
	}
	else
	{

		Node* q = u->getNext() ;
		u->setNext( q->getNext() ) ;
		q->getNext()->setPrev( u ) ;
		delete q ;

	}
}


Node* Manager::getHeader()
{
	return header ;
}


void Manager::purgeList()
{

	Node* p = header->getNext() ;
	while( p->getNext() != header )
	{
		Node* q = p ;
		while( q->getNext() != header )
		{
			if( p->getElement() == q->getNext()->getElement() )
				this->deleteAfter2( q ) ;
			else
				q = q->getNext() ;
		}
		if( p->getNext() != header )
			p = p->getNext() ;
	}

}

void Manager::recursive_reverse( Node* p )
{
	if( p == header  )
	{
		cout <<"\n  The error has been occured";
	}
		else if( p->getNext() == 0 )
		{
			cout <<"\n   The reverse in your list doesn't have any mean";
		}
			else
			{
				Node* q = p->getNext() ;
				this->recursive_reverse( q ) ;
				q->setNext( p ) ;
				p->setNext( 0 ) ;
				header = p ;
			}
	
		
}


void Manager::dupWithPerNode( Node* p )
{
	if( p->getNext() == 0 )
		p->setNext( new Node( p->getElement() , 0 , 0 ) ) ;
	else
	{
		p->setNext( new Node( p->getElement() , p->getPrev() , p->getNext() ) ) ;
		this->dupWithPerNode( p->getNext()->getNext() ) ;
	}
}

void Manager::findAndDeleteMax()
{
	if( this->isEmpty() )
		cout <<"\n  The error has been occured" ;
	else
	{

		Node* p = header ;
		Node* q = header->getNext() ;
		int max2 = header->getNext()->getElement()  ;
		
		while( p->getNext() != 0 )
		{
			if( p->getNext()->getElement() > max2 )
			{	
				max2 = p->getNext()->getElement() ;
				q = p ;
			}
			p = p->getNext() ;

		}
		this->deleteAfter2( q ) ;
		cout << "dasd" ;

	}
	
	
}


void Manager::findMax()
{
	if( this->isEmpty() )
		cout <<"\n  The error has been occured" ;
	else
	{

		Node* p = header ;
		Node* q = header->getNext() ;
		max = header->getNext()->getElement()  ;
		
		while( p->getNext() != 0 )
		{
			if( p->getNext()->getElement() > max )
			{	
				max = p->getNext()->getElement() ;
				q = p ;
			}
			p = p->getNext() ;

		}
		this->deleteAfter2( q ) ;
		cout << "dasd" ;

	}
	
	
}

void Manager::Josepheos()
{
	int size = this->currentSize() ;
	vector<int> temp ;
	vector<int> box ;

	while( size != 0 )
	{
		temp.push_back( size%2 ) ;
		size = size / 2 ;
	}

	temp.pop_back() ;


	/*for( int i = temp.size() - 1 ; i >= 0 ; i-- )
	{
		box.push_back( temp[i] ) ;
	}

	box.pop_back() ;*/


	//for( int i = 0 ; i < temp.size() - 1 ; i++ )
	//{
	//	box.push( temp.top() ) ;
	//	temp.pop() ;
	//}

	//temp.pop() ;

	//for( int j = 0 ; j < box.size() ; j++ )
	//{
	//	temp.push( box.top() ) ;
	//	temp.pop() ;
	//}



	cout <<endl;

}


//bool myfunction (int i,int j) { return (i<j); }


void Manager::sort()
{

	int *counteiner = new int[ this->currentSize() ] ;
	Node* p = header->getNext() ;
	int size = this->currentSize() ;

	for( int i=0 ; i < this->currentSize() ; i++ )
	{
		counteiner[ i ] = p->getElement() ;
		p = p->getNext() ;
	}



	vector<int> myvector( size )  ;
    vector<int>::iterator it;


	partial_sort_copy ( counteiner , counteiner+size , myvector.begin(), myvector.end());



	Node* q = header->getNext() ;

	for( int j = 0 ; j < this->currentSize() ; j++ )
	{
		q->setElement( myvector[j] ) ;
		q = q->getNext() ;
	}

	cout << endl ;		

}