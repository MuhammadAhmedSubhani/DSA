#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter integer: ";
    cin >> num1;
    cout << "Enter integer: ";
    cin >> num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    int diff = *ptr1 - *ptr2;
    int prod = (*ptr1) * (*ptr2);

    cout << "Sum : " << sum << endl;
    cout << "Difference : " << diff << endl;
    cout << "Product : " << prod << endl;

    return 0;
}
