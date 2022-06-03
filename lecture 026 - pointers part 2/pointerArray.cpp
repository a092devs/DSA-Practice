#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {72, 254, 23, 68};

    // arr is same as &arr[0]
    // cout << "Address of first memory block is: " << arr << endl;
    // cout << arr[0] << endl;
    // cout << "Address of first memory block is: " << &arr[0] << endl;

    // cout << "1st " << *arr << endl;
    // cout << "2nd " << *arr + 1 << endl;
    // cout << "3rd " << *(arr + 1) << endl;
    // cout << "3rd " << *(arr) + 1 << endl;
    // cout << "3rd " << arr[2] << endl;
    // cout << "3rd " << *(arr + 2) << endl;

    // int i = 3;
    // cout << i[arr] << endl;

    // int temp[10];
    // cout << sizeof(temp) << endl;

    // int *ptr = &temp[0];
    // cout << sizeof(ptr) << endl;
    // cout << sizeof(*ptr) << endl;
    // cout << sizeof(&ptr) << endl;

    // int a[20] = {1, 2, 3, 5};
    // cout << "-> " << &a[0] << endl;
    // // cout << &a << endl;
    // // cout << a << endl;

    // int *p = &a[0];
    // // cout << p << endl;
    // // cout << *p << endl;
    // cout << "-> " << &p << endl;

    int arr[10];

    // this will give error as not assignable
    // arr = arr + 1;  // cannot be changed because it is assigned in symbol table

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}