#include<iostream>
#include<string.h>
#include<set>
#include<map>
#include <chrono>
using namespace std::chrono;
using namespace std;

bool check_key(map<string, bool> m,string key)
{
    if (m.find(key) == m.end())
        return false;

    return true;
}

bool match(string s,string dictionary[],int l)
{
    for(int i=0;i<l;i++){
        if(s==dictionary[i]){
            return true;
        }
    }
    return false;
}

bool match_strings(string s,map<string,bool> &m,string dictionary[],int l){

 if(s.empty()){
    return true;
 }
 if(check_key(m,s)){
     auto itr = m.find(s);
     return itr->second;
 }

 for(int i=1;i<=s.length();i++){
        bool ans =match_strings(s.substr(i,s.length()-i+1),m,dictionary,l);
    if(match(s.substr(0,i),dictionary,l) && ans){
           m.insert({s.substr(i,s.length()-i+1),true});
        return true;
    }else{
        if(ans){
             m.insert({s.substr(i,s.length()-i+1),true});
        }else{
             m.insert({s.substr(i,s.length()-i+1),false});
        }
    }
 }

 return false;
}

bool repeat(string s,string dictionary[],int l)
{
    map<string,bool> m;
    if(match_strings(s,m,dictionary,l)){
      return true;
    }

    return false;
}

int main(){
    int n;
    cout<<"Enter the length of dictionary: ";
    cin>>n;
    cout<<"\nEnter the words of dictionary: ";
    string dictionary[n];
    for(int i=0;i<n;i++){
        cin>>dictionary[i];
    }
    cout<<"\nEnter the string: ";
    string s;
    cin>>s;

    auto start = high_resolution_clock::now();
    if(repeat(s,dictionary,n)){
         cout<<"****String can be segmented into a space-separated sequence of dictionary words.****"<<endl;
    }else{
        cout<<"****String can *NOT* be segmented into a space-separated sequence of dictionary words.****"<<endl;
    }

    auto stop = high_resolution_clock::now();

    cout <<endl<< "Time taken by string segment check in microseconds : "
        << chrono::duration_cast<chrono::microseconds>(stop - start).count()<< " microseconds" << endl;

  return 0;
}
