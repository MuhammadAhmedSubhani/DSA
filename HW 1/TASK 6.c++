#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter  Values:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1  << " Values " << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << " Even numbers: " << evenCount << endl;
    cout << " Odd numbers: " << oddCount << endl;

    return 0;
}
