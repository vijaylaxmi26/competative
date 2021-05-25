#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid=0;

        if(nums.size()<=2){
            for(int i=0;i<nums.size();i++){
                if(target==nums[i]){
                    return i;
                }
            }
            return -1;
        }

        if(nums[0]<nums[nums.size()-1]){
            //cout<<"1"<<endl;
            while(l<=r){
                mid=(l+r)/2;
                if(target==nums[mid]){
                    return mid;
                }else if(target>nums[mid]){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
            }
            return -1;
        }

        while(l<=r){
            mid=(l+r)/2;
            //cout<<l<<" "<<r<<endl;
            if(mid==0){
                if(nums[mid]>nums[mid+1]){
                    break;
                }else{
                    l=mid+1;
                }
            }
            if(mid==nums.size()-1){
                if(nums[mid]<nums[mid-1]){
                    break;
                }else{
                    r=mid-1;
                }
            }
            if((nums[mid]>nums[mid+1]) && (nums[mid]>nums[mid-1]) ){
                break;
            }else if(nums[l]>nums[mid]){
                r=mid;
            }else if(nums[r]<nums[mid]){
                l=mid+1;
            }

            //cout<<mid<<endl;
        }

        l=0;
        r=nums.size()-1;
        if(nums[l]<=target && target<=nums[mid]){
            r=mid;
        }else{
            l=mid+1;
        }

        while(l<=r){
                mid=(l+r)/2;
                if(target==nums[mid]){
                    return mid;
                }else if(target>nums[mid]){
                    l=mid+1;
                }else{
                    r=mid-1;
                }
        }


        return -1;

}
int main(){


return 0;
}
