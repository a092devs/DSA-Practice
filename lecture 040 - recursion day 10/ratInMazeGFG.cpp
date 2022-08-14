// solution of https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited){
        if( (x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0)
            return true;
        else 
            return false;
    }
    
    void solve(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> visited, vector<string> &ans, string path)
    {
        if(x == n - 1 && y == n - 1){
            ans.push_back(path);
            return;
        }
        
        visited[x][y] = 1;
        
        // down
        int newx = x+1;
        int newy = y;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('D');
            solve(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
        // up
        newx = x-1;
        newy = y;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('U');
            solve(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
        // left
        newx = x;
        newy = y-1;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('L');
            solve(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
        // right
        newx = x;
        newy = y+1;
        if(isSafe(m,n,newx,newy,visited)){
            path.push_back('R');
            solve(m,n,newx,newy,visited,ans,path);
            path.pop_back();
        }
        
        visited[x][y] = 0;
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0] == 0)
            return ans;
            
        int srcx = 0;
        int srcy = 0;
        
        vector<vector<int>> visited = m;
        
        for(int i = 0; i<n;i++){
            for(int j = 0; j < n; j++){
                visited[i][j]=0;
            }
        }
        
        string path = "";
        
        solve(m, n, srcx, srcy, visited, ans, path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};