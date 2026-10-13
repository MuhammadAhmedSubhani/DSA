#include <iostream>
using namespace std;

int main() {
    int prices[] = {450, 120, 300, 80, 250};
    int n = 5;

    cout << "Original Prices: ";
    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    cout << "\n";

    // Selection Sort in Descending Order
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (prices[j] > prices[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap current element with maximum element found
        int temp = prices[i];
        prices[i] = prices[maxIndex];
        prices[maxIndex] = temp;
    }

    cout << "Sorted Prices (Highest to Lowest): ";
    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    cout << "\n";

    return 0;
}