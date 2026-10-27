#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAfter(Node* head, int target, int value) {
    Node* temp = head;

    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Target node not found." << endl;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void displayForward(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void displayBackward(Node* head) {
    if (head == NULL) {
        cout << endl;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main() {
    // Task 1
    Node* hospital = NULL;

    insertAtEnd(hospital, 102);
    insertAtEnd(hospital, 103);
    insertAtEnd(hospital, 104);

    insertAtBeginning(hospital, 101);

    cout << "Task 1 - Hospital Patient Queue:" << endl;
    displayForward(hospital);

    // Task 2
    Node* orders = NULL;

    insertAtEnd(orders, 501);
    insertAtEnd(orders, 502);
    insertAtEnd(orders, 503);
    insertAtEnd(orders, 504);

    insertAtEnd(orders, 505);

    cout << "\nTask 2 - Online Shopping Orders:" << endl;
    displayForward(orders);

    // Task 3
    Node* bus = NULL;

    insertAtEnd(bus, 10);
    insertAtEnd(bus, 20);
    insertAtEnd(bus, 40);
    insertAtEnd(bus, 50);

    insertAfter(bus, 20, 30);

    cout << "\nTask 3 - Bus Stop Management:" << endl;
    cout << "Forward:  ";
    displayForward(bus);

    cout << "Backward: ";
    displayBackward(bus);

    return 0;
}
