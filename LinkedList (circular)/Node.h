#ifndef NODE_H
#define NODE_H

//using namespace std;

class Node
{

public:
	Node();
	Node( int element , Node* prev , Node* next ) ;
	void setElement( int newElement ) ;
	void setPrev( Node* newPrev ) ;
	void setNext( Node* newNext) ;
	int getElement() ;
	Node* getPrev() ;
	Node* getNext() ; 

private:
	int element;
	Node* next;
	Node* prev;

};

#endif