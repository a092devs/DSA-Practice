#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
        return isSorted(arr + 1, n - 1);
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr, n);

    if (ans)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}