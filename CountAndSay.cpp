#include<bits/stdc++.h>
using namespace std;


  vector<vector<int>> count(string s){
        vector<vector<int>> v;
        char key=s[0];
        int count=0;
        int i=0;
        while(i<s.length()){
            if(key==s[i]){
                count++;
                i++;
            }else{
                v.push_back({count,(int)key-48});
                key=s[i];
                count=0;
            }
        }

        v.push_back({count,(int)key-48});

        return v;
    }
    string itoa(int n){
        string s="";
        int r=0;
        while(n>0){
            r=n%10;
            s+=(char)(r+48);
            n=n/10;
        }
        reverse(s.begin(), s.end());

        return s;
    }


    string countAndSay(int n) {
       if(n==1){
           return "1";
       }

        string s= countAndSay(n-1);
        vector<vector<int>> v=count(s);

        string str="";
        for(int i=0;i<v.size();i++){
            str+=itoa(v[i][0])+itoa(v[i][1]);
        }

     return str;

    }

int main(){

 cout<<countAndSay(5)<<endl;
return 0;
}
