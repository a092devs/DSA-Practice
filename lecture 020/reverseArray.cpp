#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0, e = v.size() - 1;
    while(s <= e){
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void printArray(vector<int> v){
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;

    v.push_back(8);
    v.push_back(2);
    v.push_back(9);
    v.push_back(6);
    v.push_back(1);
    v.push_back(7);

    cout << "Array before reversing: ";
    printArray(v);

    vector<int> ans = reverse(v);

    cout << "Array after reversing: ";
    printArray(ans);

    return 0;
}