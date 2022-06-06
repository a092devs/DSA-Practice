#include<iostream>
using namespace std;

void update(int &m){
    m++;
}

int main(){
    // int i = 11;
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    int n = 5;
    cout << "Bedore update: " << n << endl;
    update(n);
    cout << "After update: " << n << endl;

    return 0;
}