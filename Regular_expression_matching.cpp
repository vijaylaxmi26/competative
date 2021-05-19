#include<bits/stdc++.h>
using namespace std;

bool matching(string str,string pattern){
    int n=str.length();
    int m=pattern.length();
    int table[n+1][m+1];

    table[0][0]=1;
    int flag=0;
    for(int i=1;i<m+1;i++){
        if(pattern[i-1]=='*'){
             table[0][i]=table[0][i-2];
        }else{
            table[0][i]=0;
        }
    }
    for(int i=1;i<n+1;i++){
           table[i][0]=0;
    }
    /*
    if(flag==1){
        for(int i=1;i<m+1;i++){
           table[0][i]=0;
        }
    }else{
        for(int i=1;i<m+1;i++){
           table[0][i]=1;
        }
    }

    */


    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if((str[i-1]==pattern[j-1]) || (pattern[j-1]=='.')){
                table[i][j]=table[i-1][j-1];
            }else if(pattern[j-1]=='*'){
                if(table[i][j-2]==1){
                    table[i][j]=1;
                    //cout<<table[i][j]<<endl;
                }else{
                    if(str[i-1]==pattern[j-2] || pattern[j-2]=='.'){
                        table[i][j]=table[i-1][j];
                    }
                    //cout<<table[i][j]<<endl;
                }
            }else{
               table[i][j]=0;
            }
        }
    }

    if(table[n][m]==1){
        return true;
    }

    return false;
}
int main(){
   string str="aaa";
   string pattern="ab*a";
   cout<<matching(str,pattern);

return 0;
}
