#include<bits/stdc++.h>
using namespace std;

string zigzag(string s,int row){
    char arr[row][s.length()];
    //memset(arr, 0, row*s.length()*sizeof(char) );
    int disrec=0,j=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<s.length();j++){
            arr[i][j]=' ';
        }
    }

    int flag=0;
    if(row!=1){
      flag=1;
    for(int i=0;i<s.length();i++){
        arr[j][i]=s[i];
        //cout<<i<<" "<<arr[j][i]<<endl;
        if(disrec==0){
            if(j==row-1){
                disrec=1;
                j=row-2;
            }else{
                j++;
            }
        }else{
           if(j==0){
            disrec=0;
            j=1;
           }else{
              j--;
           }
        }
        /*
        for(int i=0;i<row;i++){
        for(int j=0;j<s.length();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
       }
       cout<<endl;
       */
    }
    }
    string str;
   if(flag==1){
    for(int i=0;i<row;i++){
        for(int j=0;j<s.length();j++){
            if(arr[i][j]!=' '){
              str+=arr[i][j];
            }
        }
    }
   }else{
       str=s;
   }

   return str;
}
int main(){
   string s="PAYPALISHIRING";
   int row=3;

   cout<<zigzag(s,row);
return 0;
}
