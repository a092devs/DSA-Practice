#include<iostream>
using namespace std;

int arithProg(int n){
    int ap = 3*n+7;
    return ap;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Answer is " << arithProg(n);

    return 0;
}