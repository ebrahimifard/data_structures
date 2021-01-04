#ifndef NODE_H
#define NODE_H

using namespace std;

class Node
{

public:
	Node() ;
	Node( int elemnt , Node* prev , Node* next ) ;
	void setElement( int newElement ) ;
	void setNext( Node* newNext ) ;
	void setPrev( Node* newPrev ) ;
	int getElement() ;
	Node* getNext() ;
	Node* getPrev() ;

private:
	int element ;
	Node* next ;
	Node*prev ;

};

#endif
