#include<iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >='a' && ch <='z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char ch[], int n){
    int s = 0, e = n - 1;

    while(s<=e){
        if (toLowerCase(ch[s++]) == toLowerCase(ch[e--]))
            return 1;
        else    
            return 0;
    }
}

void reverse(char ch[], int n){
    int s = 0, e =n - 1;
    while (s < e){
        swap(ch[s++], ch[e--]);
    }
}

int getLength(char ch[]){
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s) {

    int arr[26] = {0};

    for(int i=0; i<s.length(); i++) {
        char ch = s[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maximum = -1, ans = 0;
    for(int i=0;i<26; i++) {
        if(maximum < arr[i]) {
            ans = i;
            maximum = arr[i];
        }
    }

    return 'a'+ans;
}

int main(){
    // char name[20];

    // cout << "Enter your name: ";
    // cin >> name;

    // cout << "Your name is: " << name << endl;

    // int len = getLength(name);
    // cout << "Length of your name is: " << len << endl;

    // reverse(name, len);
    // cout << "Name in reverse order is: " << name << endl;

    // cout << "Palindrome or Not: " << checkPalindrome(name, len) << endl;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "The alphabet with max occurence is: " << getMaxOccCharacter(s);

    return 0;
}