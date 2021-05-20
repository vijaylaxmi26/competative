#include<bits/stdc++.h>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    string s="";
    int j=0;
    for(int j=0;j<strs[0].length();j++){
      int flag=0;
      for(int i=0;i<strs.size();i++){
         if(strs[i][j]!=strs[0][j]){
             flag=1;
             break;
         }
      }
       if(flag==1){
        break;
       }
       s+=strs[0][j];
    }

  return s;

}

int main(){
    vector<string> str;
    str.push_back("cardog");
    str.push_back("cardgre");
    str.push_back("car");

    cout<<longestCommonPrefix(str)<<endl;

return 0;
}
