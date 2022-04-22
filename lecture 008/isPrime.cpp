#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2;  i < n; i++){
        if (n%i == 0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter a number to check prime: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is prime" << endl;
    else    
        cout << n << " is not prime" << endl;

    return 0;
}