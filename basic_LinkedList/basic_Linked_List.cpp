#include <iostream>
using namespace std; 

struct Node{
    int value; 
    Node* link;
};

Node* addNode(Node* first);
void printList(Node* first); 

int main(){
    Node* root = nullptr; 
    root = addNode(root); 
    printList(root);

    return 0; 
}

Node* addNode(Node* first){
    Node* newNode, *last; 
    int val; 
    cout << "Enter a number: "; cin >> val;
    while(val != 0){
        newNode = new Node; 
        newNode->value = val;
        newNode->link = nullptr;
        if(first == nullptr){
            first = newNode; 
            last = newNode;
        }
        else{
            last->link = newNode; 
            last = newNode; 
        }
        cin >> val; 
    }
    return first; 
}
void printList(Node* first){
    Node* curr = first; 
    while(curr != nullptr){
        cout << curr->value << " "; 
        curr = curr->link; 
    }
}