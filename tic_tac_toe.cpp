#include<bits/stdc++.h>
using namespace std;

void tic_tac_toe(){
   vector<string> arr;
   for(int i=0;i<3;i++){
      string s;
      cin>>s;
      arr.push_back(s);
   }

   int x_cnt=0,o_cnt=0;
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
         if(arr[i][j]=='X'){
            x_cnt++;
         }else if(arr[i][j]=='O'){
             o_cnt++;
          }
      }
   }
   int x_win=0,o_win=0;
   for(int i=0;i<3;i++){
    if(arr[i][0]=='X' && arr[i][1]=='X' && arr[i][2]=='X'){
        //cout<<"yes1"<<endl;
        x_win=1;
    }
    if(arr[i][0]=='O' && arr[i][1]=='O' && arr[i][2]=='O'){
        o_win=1;
    }
   }

   for(int i=0;i<3;i++){
    if(arr[0][i]=='X' && arr[1][i]=='X' && arr[2][i]=='X'){
        //cout<<"yes1"<<endl;
        x_win=1;
    }
    if(arr[0][i]=='O' && arr[1][i]=='O' && arr[2][i]=='O'){
        o_win=1;
    }
   }

   if( (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')){
       x_win=1;
   }

   if( (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')){
       o_win=1;
   }

   //cout<<x_win<<" "<<o_win<<" "<<x_cnt<<" "<<o_cnt<<endl;
   int ans=2;

   if( (x_win==1 && o_win==1) || !(x_cnt==o_cnt || x_cnt==(o_cnt+1)) || (x_win==1 && !(x_cnt==(o_cnt+1))) || (o_win==1 && !(x_cnt==o_cnt) ) ){
        ans=3;
   }else if( ( (x_cnt==o_cnt+1) || (x_cnt==o_cnt) ) && ((x_win+o_win==1) || (x_cnt+o_cnt==9)) ){
       ans=1;
   }

   cout<<ans<<endl;

   return;

}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        tic_tac_toe();
    }
return 0;
}
