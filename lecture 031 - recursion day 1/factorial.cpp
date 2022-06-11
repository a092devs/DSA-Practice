#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0)
        return 1;
    return n * factorial(n - 1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int ans = factorial(n);
    cout << "The factorial of " << n << " is " << ans << endl;

    return 0;
}