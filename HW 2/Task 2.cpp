// Task 2: Insert an Element at the Beginning of an Array
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int newElement = 5;
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = newElement;
    size++;
    cout << "Array after inserting " << newElement << " at the beginning: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}