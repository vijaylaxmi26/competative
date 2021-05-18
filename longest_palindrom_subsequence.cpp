#include<bits/stdc++.h>
using namespace std;

string lps(string s){

  int n=s.length();
  int maxlengh=1;
  int start=0;
  int table[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        table[i][j]=0;
    }

  }

  for(int i=0;i<n;i++){
    table[i][i]=1;
  }

  for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
     table[i][i+1]=1;
     start=i;
     maxlengh=2;
    }

  }

  for(int k=3;k<=n;k++){
    for(int i=0;i<n-k+1;i++){
        int j= i+k-1;
        if(s[i]==s[j] && table[i+1][j-1]==1){
            table[i][j]=1;
            if(k>maxlengh){
                start=i;
                maxlengh=k;
            }
        }
    }
  }

 /*
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<table[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  */
   string str="";
  for(int i=start;i<=start+maxlengh-1;i++){
     str=str+s[i];
  }

  return str;
}
int main(){

    string s="geeksskeeg";

    cout<<lps(s);

return 0;
}
