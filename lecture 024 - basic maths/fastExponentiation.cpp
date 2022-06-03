#include<iostream>
using namespace std;

int fastExpo(int a, int b){
    int res = 1;
    while(b > 0){
        if (b & 1){
            res *= a;
        }
        b >>= 1;
        a *= a;
    }
    return res;
}

int main(){
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    cout << "Answer: " << fastExpo(a, b); 

    return 0;
}