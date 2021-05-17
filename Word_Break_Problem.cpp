#include<iostream>
#include<string.h>
using namespace std;

bool match(string s)
{
    string dictionary[]={ "i","like", "sam" , "sung", "samsung" , "mobile" , "ice", "cream" ,
    "icecream" , "man" , "go", "mango"};
    int l=sizeof(dictionary)/sizeof(dictionary[0]);
    for(int i=0;i<l;i++){
        //cout<<dictionary[i]<<endl;
        if(s==dictionary[i]){
            return true;
        }
    }
    return false;
}
bool match_strings(string s,int i,int j,int l){


    string str= s.substr(i,j-i+1);


    if( i<l && j<l){
     if(match(str)){
         if(j==l-1){
                return true;
         }
         return match_strings(s,i+str.length(),++j,l);
     }else{
         if(j==l-1){
                return false;
         }
         return match_strings(s,i,++j,l);
      }
    }

}
void repeat(string s,int l)
{
    int i=0,j=0;
    if(match_strings(s,i,j,l)){
      cout<<"True";
    }else
      cout<<"False";
    return;
}

int main(){

    cout<<"Enter the string: ";
    string s;
    cin>>s;
    int l=s.length();
    repeat(s,l);

  return 0;
}
