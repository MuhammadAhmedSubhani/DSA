#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter Values: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1  << " Value " << ": ";
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}
