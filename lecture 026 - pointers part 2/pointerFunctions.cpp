#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl; 
}

void update(int *p){
    // p = p + 1;
    // cout << "inside "<< p <<endl;
    *p = *p + 1;
}

int getSum(int *arr, int n){

    cout << "Size of the pointer to the array: " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    cout << "Sum of the array: " << sum << endl;

    return 0;
}

int main(){

    // int value = 5;
    // int *p = &value;

    // print(p);
    // cout <<"Before update " << *p << endl;
    // update(p);
    // cout <<"After update " << *p << endl;

    int arr[6] = {1,2,3,4,5,8};

    getSum(arr+3, 3);

    return 0;
}