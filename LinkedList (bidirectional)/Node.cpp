

#include "Node.h"

Node::Node()
{
	next = 0 ;
	prev = 0 ;
}

Node::Node( int element , Node* prev ,  Node* next )
{
	this->element = element ;
	this->next = next ;
	this->prev = prev ;
} 

void Node::setElement( int newElement )
{
	this->element = newElement ;
}

void Node::setNext( Node* newNext )
{
	this->next = newNext ;
}

void Node::setPrev( Node* newPrev )
{
	this->prev = newPrev ;
}

int Node::getElement()
{
	return this->element ;
}

Node* Node::getNext()
{
	return this->next ;
}

Node* Node::getPrev()
{
	return this->prev ;
}