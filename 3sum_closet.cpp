#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& num, int target){

    sort(num.begin(),num.end());
    int sum=-10000;
    int i=0;
    for(i=0;i<num.size();i++){
        int j=i+1,k=num.size()-1;
        int flag=0;
        while(j<k){
              //cout<<num[i]<<" "<<num[j]<<" "<<num[k]<<endl;
             int add=num[i]+num[j]+num[k];
              //cout<<"add="<<add<<endl;
             if(abs(target-add)<abs(target-sum)){
                sum=add;
             }

            if(add<target){
                  j++;
            }else if(add>target){
                 k--;
            }else{
                  flag=1;
                  break;
            }
        }
        if(flag==1){
            break;
        }

    }



  return sum;
}


int main(){
    vector<int> num;

    num.push_back(-1);
    //num.push_back(0);
    num.push_back(1);
    num.push_back(2);
    //num.push_back(-1);
    num.push_back(-4);

    cout<<threeSumClosest(num,1) ;
return 0;
}
