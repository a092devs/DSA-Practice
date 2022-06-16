#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s<e){
        if (arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[100], n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Pivot Index is at: " << getPivot(arr, n) << endl;

    return 0;
}