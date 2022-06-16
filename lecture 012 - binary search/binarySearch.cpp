#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0, end = n-1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){
    int n, arr[100], key;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: "; 
    // Enter the array in sorted order
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> key;

    cout << "Index of " << key << " is: " << binarySearch(arr, n, key) << endl;

    return 0;
}