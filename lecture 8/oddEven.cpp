#include<iostream>
using namespace std;

bool isEven(int n){
    if (n&1)
        return 0;
    else
        return 1;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num)){
        cout << num << " is an even number" << endl;
    }
    else{
        cout << num << " is an odd number" << endl;
    }

    return 0;
}