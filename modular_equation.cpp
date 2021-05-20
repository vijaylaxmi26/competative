#include<bits/stdc++.h>
using namespace  std;

const int M=5e5+5;
vector<vector<int>> divs(M);

void pre(){

      int i,j;
     for(i=1;i<M;i++){
        for(j=i;j<M;j+=i){
            divs[j].push_back(i);
        }
     }

     return;
}

void modular(){
    int n,m;
    cin>>n;
    cin>>m;
    long long int ct=0;


    for(int b=2;b<=n;b++){
        int x=m-(m%b);
        if(x>0){
            ct+=lower_bound(divs[x].begin(),divs[x].end(),b)-divs[x].begin();
        }else{
            ct+=b-1;
        }
    }

    cout<<ct<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    pre();
    while(t--){
        modular();
    }

return 0;
}
