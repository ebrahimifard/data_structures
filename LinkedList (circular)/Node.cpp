
#include "Node.h"

Node::Node()
{
    prev = 0;
    next = 0 ;
}


Node::Node( int element , Node* prev , Node* next )
{
	this->element = element ;
	this->prev = prev ; 
	this->next = next ;

}

void Node::setElement( int newElement )
{
	this->element = newElement ;
}

void Node::setPrev( Node* newPrev )
{
	this->prev = newPrev ;
}

void Node::setNext( Node* newNext )
{
	this->next = newNext ; 
}

int Node::getElement()
{
	return this->element ;
}

Node* Node::getPrev()
{
	return this->prev ;
}

Node* Node::getNext()
{
	return this->next ;
}

