#include<iostream>
using namespace std;

int main(){
    int num = 10;
    cout << num << endl;

    // address of operator - '&'
    cout << "Address of num is: " << &num << endl;

    int *ptr = &num;

    cout << "Address is: " << ptr << endl;
    cout << "Value is: " << *ptr << endl;

    double d = 6.3;
    double *ptr1 = &d;

    cout << "Address is: " << ptr1 << endl;
    cout << "Value is: " << *ptr1 << endl;

    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer is: " << sizeof(ptr) << endl;
    cout << "Size of double is: " << sizeof(d) << endl;
    cout << "Size of pointer is: " << sizeof(ptr1) << endl;
    

    return 0;
}