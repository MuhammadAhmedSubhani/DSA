// Task 4: Complete Program (Traversal → Insertion → Deletion)
#include <iostream>
using namespace std;

void displayArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {15, 25, 35, 45, 55};
    int size = 5;

    cout << "Step 1 - Initial Array Traversal: ";
    displayArray(arr, size);

    int valToInsert = 5;
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = valToInsert;
    size++;

    cout << "Step 2 - After Inserting " << valToInsert << " at Beginning: ";
    displayArray(arr, size);
    if (size > 0) {
        size--;
    }

    cout << "Step 3 - After Deleting Last Element: ";
    displayArray(arr, size);

    return 0;
}