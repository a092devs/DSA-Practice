#include<iostream>
using namespace std;

int power(){
    int a, b;
    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter the power of the number: ";
    cin >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++){
        ans = ans * a;
    }

    return ans;
}

int main(){

    int ans = power();
    cout <<"Answer is: " << ans;

    return 0;
}