//class Node
class Node {
	int value;
	Node *next;
	Node *prev; 
public:
	Node() :value(0), next(nullptr), prev(nullptr) {}
	Node(int val) : value(val), next(nullptr), prev(nullptr) {}
	Node(int val, Node *p,Node *O) :value(val), next(p),prev(O) {}

	Node* getNextNodePtr() { return next;}
	Node* getPrevNodePtr(){return prev;}
	void setPrevNodePtr(Node *O){prev = O;}
	void setNextNodePtr(Node *p) { next = p; }
	int getNodeValue() { return value; }
	void setNodeValue(int val) { value = val; }
};

