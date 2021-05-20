#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> triplats;

        set<vector<int>> s;
    if(num.size()<=2){
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
                //cout<<num[j]<<" "<<num[k]<<endl;
                temp.push_back(0);
                temp.push_back(0);
                temp.push_back(0);

                triplats.push_back(temp);
        return triplats;
    }
    if(num[0]>=0){
        return triplats;
    }

    int i=0;
    for(i=0;i<num.size();i++){
        int j=i+1,k=num.size()-1;
        //cout<<num[i]<<endl;
        while(j<k){
            //cout<<num[j]<<" "<<num[k]<<endl;

            if(num[j]+num[k]==(-num[i])){
                vector<int> temp;
                //cout<<num[j]<<" "<<num[k]<<endl;
                temp.push_back(num[i]);
                temp.push_back(num[j]);
                temp.push_back(num[k]);

                s.insert(temp);
            }


                if(num[j]+num[k]<(-num[i])){

                j++;

                }else if(num[j]+num[k]>(-num[i])){
                 k--;
                }else{
                   j++;k--;
                }
        }

    }



    for (auto it = s.begin();it !=s.end();it++) {
        triplats.push_back(*it);
    }
   /*
    for(int i=0;i<triplats.size();i++){
        cout<<triplats[i][0]<<" "<<triplats[i][1]<<" "<<triplats[i][2]<<endl;
    }*/
  return triplats;
}


int main(){
    vector<int> num;

    num.push_back(-1);
    num.push_back(0);
    num.push_back(1);
    num.push_back(2);
    num.push_back(-1);
    num.push_back(-4);

    vector<vector<int>> triplats=threeSum(num);
return 0;
}
