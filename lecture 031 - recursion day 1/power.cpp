#include<iostream>
using namespace std;

int power(int n, int m){
    if (m==0)
        return 1;
    return n * power(n, m - 1);
}

int main(){
    int n, m;
    cout << "Enter base number: ";
    cin >> n;
    cout << "Enter power number: ";
    cin >> m;

    int ans = power(n, m);
    cout << n << " raised to the power " << m << " is " << ans << endl;

    return 0;
}