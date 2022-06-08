#include<iostream>
using namespace std;

inline int getMax(int &a, int &b){
    return (a > b) ? a : b;  // ternary operator
}

int main(){
    int a = 3, b = 4;
    int ans;

    ans = getMax(a, b);
    cout << ans << endl;

    a += 4;
    b += 2;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}