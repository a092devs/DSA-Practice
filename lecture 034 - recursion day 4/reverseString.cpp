#include<iostream>
using namespace std;

void reverse(string &str, int i, int j){
    if (i > j)
        return;

    swap(str[i++], str[j--]);
    reverse(str, i, j);
}

int main(){
    string str;
    cout << "Enter your string: ";
    cin >> str;

    int i = 0, j = str.length();

    reverse(str, i, j - 1);

    cout << str << endl;

    return 0;
}