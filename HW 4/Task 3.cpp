#include <iostream>
using namespace std;

int main() {
    int weights[] = {12, 5, 18, 3, 9};
    int n = 5;

    cout << "Original Package Weights (kg): ";
    for (int i = 0; i < n; i++) {
        cout << weights[i] << " ";
    }
    cout << "\n";

    // Selection Sort in Ascending Order
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (weights[j] < weights[minIndex]) {
                minIndex = j;
            }
        }
        // Swap current element with minimum element found
        int temp = weights[i];
        weights[i] = weights[minIndex];
        weights[minIndex] = temp;
    }

    cout << "Sorted Weights (Lightest to Heaviest): ";
    for (int i = 0; i < n; i++) {
        cout << weights[i] << " ";
    }
    cout << "\n";

    return 0;
}