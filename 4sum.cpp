#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& num,int target) {
        vector<vector<int>> triplats;

        set<vector<int>> s;
    if(num.size()<=3){
        return triplats;
    }
    sort(num.begin(),num.end());
    int flag=0;
    for(int i=0;i<num.size();i++){
        if(num[i]!=0){
            flag=1;
            break;
        }
    }

    if(flag==0){
         vector<int> temp;
                temp.push_back(0);
                temp.push_back(0);
                temp.push_back(0);

                triplats.push_back(temp);
        return triplats;
    }

    int i=0;
    for(i=0;i<num.size()-3;i++){
      for(int l=i+1;l<num.size()-2;l++){
        int j=l+1,k=num.size()-1;

        while(j<k){
             int add=num[i]+num[j]+num[k]+num[l];
            if(add==target){
                vector<int> temp;
                temp.push_back(num[i]);
                temp.push_back(num[l]);
                temp.push_back(num[j]);
                temp.push_back(num[k]);

                s.insert(temp);
            }

                if(add<target){
                  j++;
                }else if(add>target){
                   k--;
                }else{
                   j++;k--;
                }
        }

      }

    }



    for (auto it = s.begin();it !=s.end();it++) {
        triplats.push_back(*it);
    }

    for(int i=0;i<triplats.size();i++){
        cout<<triplats[i][0]<<" "<<triplats[i][1]<<" "<<triplats[i][2]<<" "<<triplats[i][3]<<endl;
    }

  return triplats;
}


int main(){
    vector<int> num;

    num.push_back(-1);
    num.push_back(0);
    num.push_back(0);
    num.push_back(1);
    num.push_back(2);
    num.push_back(-2);
    //num.push_back(-4);

    vector<vector<int>> triplats=threeSum(num,0);
return 0;
}
