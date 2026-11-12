#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int *ptr = &num;

    cout << "Value: " << num << endl;
    cout << "Address: " << &num << endl;
    cout << "Pointer Value: " << *ptr << endl;
    cout << "Pointer Address: " << ptr << endl;

    return 0;
}
