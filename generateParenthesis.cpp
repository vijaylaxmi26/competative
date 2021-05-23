#include<bits/stdc++.h>
using namespace std;


void generat(string s,int open,int close,int n,vector<string>& lis){
    if(open==n && close==n){
       lis.push_back(s);
       return;
    }

    if(open<n){
        string c=s+'(';
        generat(c,open+1,close,n,lis);
    }

    if(close<open){
        string c=s+')';
        generat(c,open,close+1,n,lis);
    }

    return;
}

vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> lis;
         generat(s,0,0,n,lis);
        for(int i=0;i<lis.size();i++){
            cout<<lis[i]<<endl;
        }

   return lis;
}

int main(){
   int n=1;
   generateParenthesis(n);
return 0;
}
