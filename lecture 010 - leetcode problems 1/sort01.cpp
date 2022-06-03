#include<iostream>
using namespace std;

void sort01(int arr[], int n){
    int i = 0, j = n-1;

    while (i < j){
        while (arr[i]==0 && i < j){
            i++;
        }
        while (arr[j]==1 && i < j){
            j--;
        }
        if (i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort01(arr, n);
    printArray(arr, n);

    return 0;
}