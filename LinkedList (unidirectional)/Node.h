#ifndef NODE_H
#define NODE_H

using namespace std;

class Node
{

public:
	Node() ;
	Node( int elemnt , Node* next ) ;
	void setElement( int newElement ) ;
	void setNext( Node* newNext ) ;
	int getElement() ;
	Node* getNext() ;

private:
	int element ;
	Node* next ;

};

#endif
