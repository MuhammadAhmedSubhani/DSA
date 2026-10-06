#include <iostream>
using namespace std;

struct Node {
    string orderID;
    Node* next;
};

int main() {

    Node* head = new Node{ "O101", nullptr};
    head->next = new Node{ "O102", nullptr};
    head->next->next = new Node{ "O103", nullptr};
    head->next->next->next = new Node{ "O104", nullptr};

    Node* newOrder = new Node{ "O105", nullptr};

    Node* current = head;

    while ( current->next != nullptr ) {
        current = current->next;
    }

    current->next = newOrder;

    Node* newOrder2 = new Node{ "O1025", nullptr};

    current = head;

    while ( current->orderID != "O102" ) {
        current = current->next;
    }

    newOrder2->next = current->next;
    current->next = newOrder2;

    current = head;

    while ( current != nullptr ) {
        cout << current->orderID << " -> ";
        current = current->next;
    }

    cout << "None" << endl;

    return 0;
}