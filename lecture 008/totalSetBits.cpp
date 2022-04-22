#include<iostream>
using namespace std;

int setBits1(int n){
    int count = 0;
    while(n != 0){
        if (n&1)
            count++;
        n = n >> 1;
    }
    return count;
}

int setBits2(int n){
    int count = 0;
    while(n != 0){
        if (n&1)
            count++;
        n = n >> 1;
    }
    return count;
}

int main(){
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int ans1 = setBits1(a);
    int ans2 = setBits2(b);

    cout << "Number of set bits in " << a << " is: " << ans1 << endl;
    cout << "Number of set bits in " << b << " is: " << ans2 << endl;

    int ans = ans1 + ans2;
    cout << "Total number of set bits are: " << ans << endl;

    return 0;
}