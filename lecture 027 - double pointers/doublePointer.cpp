#include<iostream>
using namespace std;

void update(int **p){
    // p += 1;
    // *p += 1;
    **p += 1;
}

int main(){
    int i = 3;
    int *p = &i;
    int **p1 = &p;

    // printing the value of i
    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p1 << endl;

    // // printing the value of p
    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p1 << endl;

    // // printing the value of p1
    // cout << &p << endl;
    // cout << p1 << endl;

    cout << endl << endl;
    cout << "Before update: " << i << endl;
    cout << "Before update: " << p << endl;
    cout << "Before update: " << p1 << endl;
    update(p1);
    cout << "After update: " << i << endl;
    cout << "After update: " << p << endl;
    cout << "After update: " << p1 << endl;
    cout << endl << endl;

    return 0;
}