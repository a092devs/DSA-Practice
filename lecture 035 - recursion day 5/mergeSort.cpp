#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;

    // length of the divided arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // create new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values of main index to divided arrays
    int mainIndex =  s;
    for (int i = 0; i < len1; i++){
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++){
        second[i] = arr[mainIndex++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while (index1 < len1 && index2 < len2){
        if (first[index1] < second[index2])
            arr[mainIndex++] = first[index1++];
        else    
            arr[mainIndex++] = second[index2++];
    }
    while (index1 < len1)
        arr[mainIndex++] = first[index1++];
    
    while (index2 < len2)
        arr[mainIndex++] = second[index2++];

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e){
    if (s >= e)
        return;
    
    int mid = s + (e - s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main(){
    int n, arr[100];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int s = 0, e = n - 1;
    
    mergeSort(arr, s, e);

    cout << "The arrays in sorted order: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}