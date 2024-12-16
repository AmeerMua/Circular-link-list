class Node
{
private:
	int data;
	Node* next;

public:
	Node();
	Node(int);
	void setData(int);
	void setNext(Node* );
	int getData();
	Node* getNext();
};