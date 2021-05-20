#include<bits/stdc++.h>
using namespace std;

int atoi(string s){
     long long int x=0;
   int sign=0,flag=0,i=0;
   for(i=0;i<s.length();i++){
      if(s[i]=='-' && i!=s.length()-1){
        int z=(int)s[i+1];
        if( 48<=z && z<=57 ){
            sign=1;
        }else if(s[i+1]=='+' ||s[i+1]=='-'){
            return 0;
        }

      }else if(s[i]=='+' && i!=s.length()-1){
         if(s[i+1]=='-' || (int)s[i+1]==32 || s[i+1]=='+'){
             return 0;
         }
      }else if(48<=(int)s[i] && (int)s[i]<=57){
          flag=1;
          break;
      }else if((int)s[i]>57 || ((int)s[i]<48 && !((int)s[i]==32) && !((int)s[i]==43))){
          return 0;
      }
   }

   //cout<<"yes"<<endl;

   if(flag==1){
      while(s[i]!=' ' && i<s.length() && (int)s[i]<=57 && (int)s[i]>=48){
          int z=(int)s[i];
          x=x*10+(z-48);
          if(x>INT_MAX && sign==0){
           return INT_MAX;
          }else if(x>INT_MAX && sign==1){
               return INT_MIN;
          }
          i++;
          //cout<<x<<" "<<i<<endl;
      }
   }
   if(sign==1){
    x=-x;
   }

   if(x>INT_MAX){
      return INT_MAX;
   }else if(x<INT_MIN){
      return INT_MIN;
   }

   return x;
}

int main(){
  string s="  -42";

  cout<<atoi(s);


return 0;
}
