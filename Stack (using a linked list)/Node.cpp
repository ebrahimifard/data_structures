

#include "Node.h"

Node::Node()
{
	next = 0 ;
}

Node::Node( int element , Node* next )
{
	this->element = element ;
	this->next = next ;
} 

void Node::setElement( int newElement )
{
	this->element = element ;
}

void Node::setNext( Node* newNext )
{
	this->next = newNext ;
}

int Node::getElement()
{
	return this->element ;
}

Node* Node::getNext()
{
	return this->next ;
}