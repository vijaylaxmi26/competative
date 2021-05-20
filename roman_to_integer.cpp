#include<bits/stdc++.h>
using namespace std;


int romanToInt(string s){
    int num=0,i=0;
    while(i<s.length()){
       if(s[i]=='M'){
          num+=1000;
          i++;
       }else if(s[i]=='D'){
           num+=500;
           i++;
       }else if(s[i]=='C'){
           if(i!=s.length()-1){
            if(s[i+1]=='M'){
               num+=900;
               i+=2;
             }else if(s[i+1]=='D'){
                 num+=400;
                 i+=2;
             }else{
                 num+=100;
                 i++;
             }
           }else{
               num+=100;
               i++;
           }
       }else if(s[i]=='L'){
           num+=50;
           i++;
       }else if(s[i]=='X'){
           if(i!=s.length()-1){
            if(s[i+1]=='L'){
               num+=40;
               i+=2;
             }else if(s[i+1]=='C'){
                 num+=90;
                 i+=2;
             }else{
                 num+=10;
                 i++;
             }
           }else{
               num+=10;
               i++;
           }
       }else if(s[i]=='V'){
           num+=5;
           i++;
       }else if(s[i]=='I'){
           if(i!=s.length()-1){
            if(s[i+1]=='V'){
               num+=4;
               i+=2;
             }else if(s[i+1]=='X'){
                 num+=9;
                 i+=2;
             }else{
                 num+=1;
                 i++;
             }
           }else{
               num+=1;
               i++;
           }
       }
    }

    return num;
}

int main(){

    string s="III";
    cout<<romanToInt(s)<<endl;
    s="IV";
    cout<<romanToInt(s)<<endl;
    s="IX";
    cout<<romanToInt(s)<<endl;
    s="LVIII";
    cout<<romanToInt(s)<<endl;
    s="MCMXCIV";
    cout<<romanToInt(s)<<endl;

return 0;
}
