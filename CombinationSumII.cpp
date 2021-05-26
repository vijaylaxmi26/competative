 #include<bits/stdc++.h>
using namespace std;

 void check(vector<int> temp,set<vector<int>>& vec,int rem,vector<int> candidates,int ind){
        if(rem==0){
            sort(temp.begin(),temp.end());
            vec.insert(temp);
            return;
        }

        if(rem<0){
            return;
        }

        for(int i=ind;i<candidates.size();i++){
              temp.push_back(candidates[i]);
              check(temp,vec,rem-candidates[i],candidates,i+1);
              temp.pop_back();
        }
        //temp.clear();

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> vec1;
        vector<int> temp;
        vector<vector<int>> vec;

        cout<<candidates.size()<<endl;
        int sum=0;
        for(int i=0;i<candidates.size();i++){
            sum+=candidates[i];
        }
        if(sum<target){
            return vec;
        }
         check(temp,vec1,target,candidates,0);

         for (auto it = vec1.begin();it != vec1.end(); it++) {
            vec.push_back(*it);
         }
        return vec;
    }
int main(){


return 0;
}
