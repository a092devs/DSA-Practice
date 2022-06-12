#include<iostream>
using namespace std;

int findSum(int *arr, int n){
    if (n == 1)
        return arr[0];

    return arr[0] + findSum(arr + 1, n - 1);
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The sum of the given array is " << findSum(arr, n) << endl;

    return 0;
}