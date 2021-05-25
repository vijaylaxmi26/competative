#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        int ind1=-1,ind2=-1;

        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind1=i;
                break;
            }
        }

        //cout<<ind1<<endl;
        if(ind1==-1){
           // cout<<"1"<<endl;
            if(nums.size()%2==0){
          for(int i=0;i<(nums.size())/2;i++){
            int temp=nums[i];
            nums[i]=nums[nums.size()-1-i];
            nums[nums.size()-1-i]=temp;
           // cout<<temp<<endl;
           }
            }else{
                for(int i=0;i<=(nums.size())/2;i++){
            int temp=nums[i];
            nums[i]=nums[nums.size()-1-i];
            nums[nums.size()-1-i]=temp;
           // cout<<temp<<endl;
           }
            }
            return;
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[ind1]){
                ind2=i;
                break;
            }
        }

        int temp=nums[ind1];
        nums[ind1]=nums[ind2];
        nums[ind2]=temp;

        int j=0;
        for(int i=ind1+1;i<=(nums.size()+ind1)/2;i++){
            temp=nums[i];
            nums[i]=nums[nums.size()-1-j];
            nums[nums.size()-1-j]=temp;
            j++;

        }

    }

int main(){


return 0;
}
