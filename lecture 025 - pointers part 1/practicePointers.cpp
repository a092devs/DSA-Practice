#include<iostream>
using namespace std;

int main(){
    // int *p = 0;
    // cout << *p << endl;

    // int i = 5;
    // int *q = &i;

    // cout << q << endl;
    // cout << *q << endl;

    // int *p = 0;
    // p = &i;

    // cout << p << endl;
    // cout << *p << endl;

    int num = 5;
    cout << "a before increment: " << num << endl;
    int a = num;
    a++;
    cout << "a after increment: " << num << endl;


    int *p = &num;
    cout << "before increment: " << num << endl;
    (*p)++;
    cout << "after increment: " << num << endl;

    // copying a pointer
    int *q = p;
    cout << *p << " = " << *q << endl;
    cout << p << " = " << q << endl;
    cout << &p << " = " << &q << endl;

    // pointer arithmetic
    int i = 3;
    int *t = &i;
   //cout <<  (*t)++ << endl;
    (*t)++;

    cout << *t << endl;
    cout << "before t " << t << endl;

    t++;
    cout << "after t " << t << endl;


    return 0;
}