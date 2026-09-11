#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer value: ";
    cin >> num;

    int* ptr = &num;

    cout << "Value : " << num << endl;
    cout << "Address : " << &num << endl;
    cout << "Value stored in pointer: " << ptr << endl;
    cout << "Value accessed by pointer : " << *ptr << endl;

    return 0;
}
