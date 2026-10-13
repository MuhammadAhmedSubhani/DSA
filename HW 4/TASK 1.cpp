#include <iostream>
using namespace std;

int main() {
    int marks[] = {65, 42, 89, 55, 30};
    int n = 5;

    cout << "Original Marks: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << "\n\n--- Bubble Sort Passes ---\n";

    // Bubble Sort in Ascending Order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (marks[j] > marks[j + 1]) {
                // Swap adjacent elements
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }

        // Display array state after each pass
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << marks[k] << " ";
        }
        cout << "\n";
    }

    cout << "\nFinal Sorted Marks (Lowest to Highest): ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << "\n";

    return 0;
}