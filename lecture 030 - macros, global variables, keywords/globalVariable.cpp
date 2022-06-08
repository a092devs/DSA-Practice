#include<iostream>
using namespace std;

int count = 20; // Not a good practice as changing global variable in any function will change it all other functions. It is recommended to use reference variable instead.

void a(int &i){
    cout << i << endl;
    cout << count << " in a" << endl;
}

void b(int &i){
    cout << i << endl;
    cout << count << " in b" << endl;
}

int main(){
    int i = 10;
    cout << count << " in main" << endl;
    a(i);
    b(i);

    return 0;
}