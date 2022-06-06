#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n]; // new is for HEAP memory allocation

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Answer is " << ans << endl;

    return 0;
}