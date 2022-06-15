#include<iostream>
using namespace std;

bool checkPalindrome(string &str, int i, int j){
    if (i > j)
        return true;
    
    if (str[i] != str[j])
        return false;
    else
        return checkPalindrome(str, i + 1, j - 1);
}

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int i = 0, j = str.length();

    bool isPalindrome = checkPalindrome(str, i, j - 1);

    if(isPalindrome)
        cout << str << " is a Palindrome" << endl;
    else    
        cout << str << " is not a Palindrome" << endl;

    return 0;
}