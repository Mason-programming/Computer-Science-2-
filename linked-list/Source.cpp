#include <iostream>
#include "Node.h"
using namespace std;

int num_of_nodes = 0;

void print_linked_list(Node *);
Node* add_node(Node*, int, int);
Node* delete_node(Node*, int);
void reverse_print(Node *rt);

/*
root                   (no name)
|--------|----|        |--------|----|
| value  | *--|------->| value  | *--|-----> nullptr
|--------|----|        |--------|----|
*/
int main() {

	Node *root = nullptr;
	Node *end = nullptr; 
	int uInput = 1, uLocation = 0, deleteVal = 0;

	while (uInput != 0) {
		cout << "Enter a number and location (with a space in between): ";
		cin >> uInput >> uLocation;
		if (uInput != 0) {
			root = add_node(root, uInput, uLocation);
			end = add_node(root, uInput, uLocation);
		}
	}




	reverse_print(end);
	print_linked_list(root);
	cout << endl << "Enter a value to delete: ";
	cin >> deleteVal;

	root = delete_node(root, deleteVal);
	print_linked_list(root);
	

	system("pause");
	return 0;
}

void print_linked_list(Node *rt) {
	//print function traverses the entire linked-list
	Node *curr = rt; //reason: do not want to mess up the root
	while (curr != nullptr) {
		cout << curr->getNodeValue() << " ";	//print value at curr node
		curr = curr->getNextNodePtr();			//move to the next node
	}
}
void reverse_print(Node *rt){
	Node *curr; 
	curr = rt;  
	while (curr != nullptr){
		cout << curr->getNodeValue() << " ";
		curr = curr->getPrevNodePtr(); 
		cout << "this is the reverse function" << endl;
	}
}

Node* add_node(Node* rt, int newValue, int location = num_of_nodes) {
	//if no node in the list, add a new node as root
	if (rt == nullptr) {
		rt = new Node(newValue);
		num_of_nodes++;
		return rt;
	}

	//add a new node at the begining of the list (before root)
	if (location == 0) {
		Node* temp = new Node(newValue);
		temp->setNextNodePtr(rt);
	
		num_of_nodes++;
		return temp;
	}

	if (location > 0) {
		if (location > num_of_nodes) {
			cout << "Location outside of the list range." << endl;
			return rt;
		}
		//location is > 0 and location is <= num_of nodes
		else {
			cout << "Location inside of the list range." << endl;
			//add a node at the location provided by user
			int count = 0;
			Node* curr = rt;
			while (count < location - 1) { curr = curr->getNextNodePtr(); count++; }

			//10   20 30 40 50
			//  \  /
			//   60 <----temp1

			//curr should now point to the location node.
			Node* temp = curr->getNextNodePtr(); //save pointer to rest of the list
			Node* temp1 = new Node(newValue);	//create a new node
			curr->setNextNodePtr(temp1);		//add new node after curr
			temp1->setNextNodePtr(temp);		//add rest of the LL after new node
			num_of_nodes++;
			return rt;
		}
	}

	//add at the end
	else {
		Node* curr = rt;
		//get to the end of the linked list
		while (curr->getNextNodePtr() != nullptr) {
			curr = curr->getNextNodePtr();			//move to the next node
		}
		//curr now points to the end of the linked list
		//add a new node here
		curr->setNextNodePtr(new Node(newValue));

		num_of_nodes++;

	}
	return rt;
}

Node* delete_node(Node* rt, int deleteVal) {
	if (rt == nullptr) return nullptr;
	
	/*
	50 40 30 20 10
	delete 30
	
	   beforeDeleted
	   |
	50 40 30 20 10 
			 |
			 afterDeleted
	*/
	Node* curr = rt;
	Node* beforeDeleted = nullptr; //to hold the pointer to a node before the deleted node
	Node* afterDeleted = nullptr;

	//root only node, and value matches, delete the root
	if (curr->getNodeValue() == deleteVal && curr->getNextNodePtr() == nullptr) {
		num_of_nodes--;
		return nullptr;
	}
	//root not the only node, and value matches, delete root
	else if (curr->getNodeValue() == deleteVal && curr->getNextNodePtr() != nullptr){
		Node* temp = rt;			//hold pointer to root
		rt = rt->getNextNodePtr();	//move rt to the second node
		delete(temp);				//delete old root from memory
		num_of_nodes--;
		return rt;					//return new root
	}
	//if node is any other node in the list
	//root -> another node -> * ->nullptr
	else {
		while(curr->getNextNodePtr() != nullptr) {
			beforeDeleted = curr;
			curr = curr->getNextNodePtr();
			afterDeleted = curr->getNextNodePtr();//this might end up causing an error

			if (curr->getNodeValue() == deleteVal){
				beforeDeleted->setNextNodePtr(afterDeleted); //delete
				num_of_nodes--;
			}
		}
	}
	return rt;
}
