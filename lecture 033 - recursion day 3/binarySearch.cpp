#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    int mid = s + (e - s)/2;

    if (s > e)
        return false;
    
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
        return binarySearch(arr, mid + 1, e, k);
    else
        return binarySearch(arr, s, mid - 1, k);
}

int main(){
    int n, arr[100], key;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int s = 0;
    int e = n - 1;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the key to search in the array: ";
    cin >> key;

    (binarySearch(arr, s, e, key)) ? cout << "Key is present" : cout << "Key is not present";

    return 0;
}