#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;

    while (i < n && j < m){
        if (arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n){
        arr3[k++] = arr1[i++];
    }

    while (j < m){
        arr3[k++] = arr1[j++];
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr1[7] = {1, 3, 5, 7, 9, 10, 12};
    int arr2[4] = {2, 4, 6, 8};
    int arr3[11] = {0};

    cout << "Arrays before merging:" << endl;
    printArray(arr1, 7);
    printArray(arr2, 4);

    merge(arr1, 7, arr2, 4, arr3);
    cout << "Arrays after merging:" << endl;
    printArray(arr3, 11);

    return 0; 
}