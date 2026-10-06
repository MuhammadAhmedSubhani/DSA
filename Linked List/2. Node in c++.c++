
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main() {

    Node* head = new Node;
    Node* second = new Node;

    head -> data = 50;
    head -> next = second;

    second -> data = 100;
    second -> next = NULL;
    
    Node* newnode = new Node;
    newnode -> data = 150;
    
    newnode -> next = head;
    head = newnode;

    Node* current = head;
    while (current != NULL) {
        cout << "Data: " << current -> data << endl;
        cout << "Next: " << current -> next << endl;
       
        current = current -> next;
    }
}