#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    float ans = 0;
    int i = 0;

    while (n != 0){
        int digit = n%10;
        ans = ans + digit * pow(2,i);

        n /= 10;
        i++;
    }

    cout << "Answer is " << ans << endl;
}