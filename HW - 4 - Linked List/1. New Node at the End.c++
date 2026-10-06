#include <iostream>
using namespace std;

struct Node {
    string productID;
    Node* next;
};

int main() {
    
    Node* head = new Node{ "P101", nullptr };
    head->next = new Node{ "P102", nullptr };
    head->next->next = new Node{ "P103", nullptr };
    head->next->next->next = new Node{ "P104", nullptr };

    Node* newNode = new Node{"P105", nullptr};

    Node* current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;

    current = head;

    while (current != nullptr) {
        cout << current->productID << " -> ";
        current = current->next;
    }

    cout << "None" << endl;

    return 0;
}   