#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int s = 0, e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;

    while (s <= e){
        long long int square = mid*mid;
        if (square == n){
            return mid;
        }
        else if (square <= n){
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    mid = s + (e - s) / 2;
    }
    return ans;
}

double floatPrecision(int n, int k, long double ans){
    double factor = 1;
    for (int i = 0; i < k; i++){
        factor /= 10;
        for (double j = ans; j*j<n; j+=factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n, k;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter the precision of decimal points: ";
    cin >> k;

    int ans = sqrtInteger(n);
    cout << "The square root of " << n << " is: " << floatPrecision(n, k, ans) << endl; 

    return 0;
}