#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde"; 

    cout << arr << endl; // prints the address of the first element

    cout << ch << endl;  // prints the entire string

    char *c = &ch[0];
    cout << c << endl;  // prints the entire string

    char temp = 'z';
    char *p = &temp;
    cout << p << endl;


    return 0;
}