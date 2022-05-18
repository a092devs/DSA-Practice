#include<iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n)){
        cout << "It is a Prime number";
    }
    else{
        cout << "It is not a Prime number";
    }

    return 0;
}