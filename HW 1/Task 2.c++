#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter value: ";
    cin >> num;

    int* ptr = &num;

    cout << "before: " << num << endl;

    int newValue;
    cout << "Enter  value : ";
    cin >> newValue;
    *ptr = newValue;

    cout << "after : " << num << endl;

    return 0;
}
