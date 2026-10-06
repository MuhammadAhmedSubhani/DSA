#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
int main() {
    Node* head = NULL;
    Node* current = NULL;
    for(int i=1; i<=5; i++){
       Node* newnode = new Node;
        newnode -> data = i* 10;
        newnode -> next = NULL;
        if(head == NULL){
            head = newnode;
            current = newnode;
        }
        else {
            current->next = newnode;
            current = newnode;
}
    }
    current = head;
    while(current != NULL){
        cout << current -> data << " ";
        cout <<"next address: " << current -> next << endl;
        current = current -> next;
    }
    
}

