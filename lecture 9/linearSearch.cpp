#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if (arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    bool found = search(arr, size, key);

    if (found){
        cout << "Key is present in the array" << endl;
    }
    else
        cout << "Key is not present in the array" << endl;

    return 0;
}