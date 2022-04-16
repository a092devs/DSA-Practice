#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int n;
    cout << "Enter a negative number: ";
    cin >> n;
    
    int ans = 0;
    int i = 0;

    if (n < 0)
        n = -1 * n;

    while (n!=0){
        int bit = n & 1; // reads the last bit
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1; // read other bits by right shifting to last bit
        i++;
    }

    cout << "Binary equivalent " << (~ans + 1) * -1;
    
}