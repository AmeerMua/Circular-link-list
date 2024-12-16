#include"Node.h"

class Linklist

{
private:
	Node *head;
	Node *tail;
public:
	Linklist(); // perametarice constructor bhi ho sakata ha ider lakin hum abhi defalut use kar rahe hai
	bool isEmpty();
	void insertAtHead(int);
	void insertAtTail(int);
	void display();
	void insertBetween(Node*,int , int );
	void insertAtTarget(int , int);
	Node *searchtarget(int );
	void removeNode(int);
};