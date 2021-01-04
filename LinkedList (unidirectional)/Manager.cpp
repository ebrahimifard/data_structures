
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

		Node* newNode = new Node( element , p->getNext() ) ;
		p->setNext( newNode ) ;
	}

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
		delete q ;

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
	while( p->getNext() != 0 )
	{
		Node* q = p ;
		while( q->getNext() != 0 )
		{
			if( p->getElement() == q->getNext()->getElement() )
				this->deleteAfter2( q ) ;
			else
				q = q->getNext() ;
		}
		if( p->getNext() != 0 )
			p = p->getNext() ;
	}

}

void Manager::recursive_reverse( Node* p )
{
	if( p == 0  )
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
		p->setNext( new Node( p->getElement() , 0 ) ) ;
	else
	{
		p->setNext( new Node( p->getElement() , p->getNext() ) ) ;
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
	int a;
	stack<int> temp ;
	stack<int> box ;

	while( size != 0 )
	{
		temp.push( size%2 ) ;
		size = size / 2 ;
	}

	temp.pop() ;

	while( !temp.empty() )
	{
		a = temp.top() ;
		box.push( a ) ;
		temp.pop() ;
	}

	box.push( 1 ) ;

	while( !box.empty() )
	{
		a = box.top() ;
		temp.push( a ) ;
		box.pop() ;
	}

	double b = temp.size()-1 ;
	double sum = 0 ;
	while( !temp.empty() )
	{
		a = temp.top() ;
		temp.pop() ;
		sum = sum + ( a * pow( 2.0 , b ) ) ;
		b-- ;
	}

	cout << endl << "\n  The person who is lived is : "<<sum ;

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

}

void Manager::changeNodes( int first , int second ) 
{
	if( first <= 0 || second <= 0 )
	{
		cout <<"\n  The error has been occured" ;
	}
	else
	{
		Node* p = header ; //->getNext() ;
		Node* q = header ; //->getNext() ;

		int firstCounter = 0 ;
		int secondCounter = 0 ;

		while( firstCounter != first )
		{
			p = p->getNext() ;
			firstCounter++ ;
		}

		while( secondCounter != second )
		{
			q = q->getNext() ;
			secondCounter++ ;
		}

		int tmp = p->getElement() ;
		p->setElement( q->getElement() ) ;
		q->setElement( tmp ) ;

		cout << endl ;
	}

	


}


void Manager::deleteAt( int n )
{
	if( n == 0 )
	{
		cout <<"\n  The error has been occured" ;
	}
	else
	{
		this->deleteAfter( n-1 ) ;
	}
	
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