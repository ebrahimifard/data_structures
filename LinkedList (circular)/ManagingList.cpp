
#include "ManagingList.h"

ManagingList::ManagingList()
{
        header = new Node();
        header->setNext( header );
        header->setPrev( header );
    //header = new Node( 0 /*null*/ ,header , header ) ;
	//this->header.setElement( 0 ) ;
	//this->header.setPrev( 0 ) ;
	//this->header.setNext( 0 ) ;
}

void ManagingList::addAtFirst( int data ) 
{
	Node* node1 = new Node( data , header , header->getNext() ) ;
	//node->setNext( header->getNext() ) ;
	//node->setPrev( header ) ; 
	header->getNext()->setPrev( node1 ) ;
	header->setNext( node1 ) ;
	
}

void ManagingList::removeFirst() 
{

	//Node* p = header->getNext() ;
	header->getNext()->getNext()->setPrev( header ) ;
	header->setNext( header->getNext()->getNext() ) ;
	//delete p ;
	

}

void ManagingList::addAtLast( int data )
{
	//Node* q ;
	//Node* i = header->getNext() ; 
	//while( i->getNext()/*->getNext()*/ != header )
	//{
	//	q = i->getNext() ;
	//	i = i->getNext() ;
	//}

	//Node* node = new Node( data , q , header ) ;
	//q->setNext( node ) ;
	//header->setPrev( node ) ;

	Node* node2 = new Node( data , header->getPrev() , header ) ;
	header->getPrev()->setNext( node2 ) ;
	header->setPrev( node2 ) ;
}


void ManagingList::removeLast()
{

	//Node* r ; 
	//Node* j = header->getNext() ; 
	//while( j->getNext()->getNext() != header )
	//{
	//	r = j->getNext() ;
	//	j = j->getNext() ;
	//}

	////Node* del = r->getNext() ;
	//r->setNext( header ) ;
	//header->setPrev( r ) ;
	header->getPrev()->getPrev()->setNext( header ) ;
	header->setPrev( header->getPrev()->getPrev() ) ;
}
