#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        generateParExp(n,n,ans,"");
        return ans;
    }
private: 
    void generateParExp(int o,int c, vector<string>&ans,string curr){
        if(o==0 && c==0){
        ans.push_back(curr);
        return;
    }
    //if o terminates, do not choose the recursion path leading to decrease in o
    if(o!=0) generateParExp(o-1,c,ans,curr+"(");
    //c decreases only if it is less than o
    if(c>o) generateParExp(o,c-1,ans,curr+")");
    }
};