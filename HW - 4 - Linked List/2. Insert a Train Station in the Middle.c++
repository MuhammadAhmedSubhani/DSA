#include <iostream>
using namespace std;

struct Node {
    string station;
    Node* next;
};

int main() {

    Node* head = new Node{ "Lahore", nullptr};
    head->next = new Node{ "Gujranwala", nullptr};
    head->next->next = new Node{ "Rawalpindi", nullptr};
    head->next->next->next = new Node{ "Islamabad", nullptr};

    Node* newNode = new Node{ "Gujrat", nullptr};

    Node* current = head;

    while ( current->station != "Gujranwala" ) {
        current = current->next;
    }


    newNode->next = current->next;
    current->next = newNode;

    current = head;

    while ( current != nullptr ) {
        cout << current->station << " -> ";
        current = current->next;
    }

    cout << "None" << endl;

    return 0;
}