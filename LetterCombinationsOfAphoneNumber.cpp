#include<bits/stdc++.h>
using namespace std;


void backtraking(string digits,int i,vector<string>& lis,vector<string> data,string s){
    if(i==digits.length()){
        lis.push_back(s);
        return;
    }

    //cout<<(int)digits[i]<<endl;

    //cout<<data[(int)digits[i]-50].length()<<endl;

    for(int j=0;j<data[(int)digits[i]-50].length();j++){
        //cout<<"s="<<s<<endl;
        //cout<<data[(int)digits[i]-50][j]<<endl;
         string c=s+data[(int)digits[i]-50][j];
        backtraking(digits,i+1,lis,data,c);
    }


}



vector<string> letterCombinations(string digits) {

   vector<string> lis;
   vector<string> data;

   data.push_back("abc");
   data.push_back("def");
   data.push_back("ghi");
   data.push_back("jkl");
   data.push_back("mno");
   data.push_back("pqrs");
   data.push_back("tuv");
   data.push_back("wxyz");

   string s="";
   backtraking(digits,0,lis,data,s);
    /*
   for(int k=0;k<lis.size();k++){
       cout<<lis[k]<<endl;
     }
    */


   return lis;
}

int main(){

    vector<string> lis = letterCombinations("234");
    for(int k=0;k<lis.size();k++){
       cout<<lis[k]<<endl;
     }

return 0;
}
