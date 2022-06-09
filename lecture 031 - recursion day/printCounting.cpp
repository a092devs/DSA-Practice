#include<iostream>
using namespace std;

void printCounting(int n){
    if (n == 0)
        return;

    // to print backward counting 
    cout << n << " ";  
    printCounting(n - 1);

    // to print normal/straight counting
    // cout << n << " ";
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printCounting(n);

    return 0;
}