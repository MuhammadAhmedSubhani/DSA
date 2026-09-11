#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1  << " value " << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
