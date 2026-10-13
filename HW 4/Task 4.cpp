#include <iostream>
using namespace std;

// Function to perform Bubble Sort in Descending Order
void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Compare for descending
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform Selection Sort in Descending Order
void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) { // Find maximum
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

// Helper function to print an array
void printArray(const int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int originalScores[] = {72, 45, 90, 60, 35};
    int n = 5;

    // Create two separate arrays for testing each algorithm
    int bubbleScores[5], selectionScores[5];
    for (int i = 0; i < n; i++) {
        bubbleScores[i] = originalScores[i];
        selectionScores[i] = originalScores[i];
    }

    cout << "Original Quiz Scores: ";
    printArray(originalScores, n);
    cout << "-------------------------------------------\n";

    // 1. Bubble Sort Result
    bubbleSortDescending(bubbleScores, n);
    cout << "Sorted via Bubble Sort (Descending):    ";
    printArray(bubbleScores, n);

    // 2. Selection Sort Result
    selectionSortDescending(selectionScores, n);
    cout << "Sorted via Selection Sort (Descending): ";
    printArray(selectionScores, n);

    return 0;
}