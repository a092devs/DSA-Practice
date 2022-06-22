#include<bits/stdc++.h>
using namespace std;

void solve(string str, vector<string> &ans, int index){
    if (index >= str.length()){
        ans.push_back(str);
        return;
    }
    for (int i = index; i < str.length(); i++){
        swap(str[index], str[i]);
        solve(str, ans, index + 1);
        swap(str[index], str[i]);
    }
}

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    int i = 0;
    solve(str, ans, i);
    sort(ans.begin(), ans.end());
    return ans;
}