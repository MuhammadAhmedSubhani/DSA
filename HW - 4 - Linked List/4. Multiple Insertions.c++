#include <iostream>
using namespace std;

struct Node {
    string employeeID;
    Node* next;
};

int main() {

    Node* head = new Node{ "E101", nullptr };
    head->next = new Node{ "E102", nullptr };
    head->next->next = new Node{ "E103", nullptr };
    head->next->next->next = new Node{ "E104", nullptr };

    Node* newEmployee = new Node{ "E105", nullptr };

    Node* current = head;

    while ( current->next != nullptr ) {
        current = current->next;
    }

    current->next = newEmployee;

    Node* newEmployee2 = new Node{ "E1025", nullptr };

    current = head;


    while ( current->employeeID != "E102" ) {
        current = current->next;
    }

    newEmployee2->next = current->next;
    current->next = newEmployee2;

    Node* newEmployee3 = new Node{ "E1035", nullptr };

    current = head;

    while ( current->employeeID != "E103" ) {
        current = current->next;
    }

    newEmployee3->next = current->next;
    current->next = newEmployee3;

    current = head;

    while ( current != nullptr ) {
        cout << current->employeeID << " -> ";
        current = current->next;
    }

    cout << "None" << endl;

    return 0;
}