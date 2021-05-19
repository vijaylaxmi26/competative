#include<bits/stdc++.h>
using namespace std;

int most_water_two(vector<int>& height){ //two pointer approch
    int area=0,left=0,right=height.size()-1;

    while(left<right){

        int temp=min(height[left],height[right]);
         if((temp*(right-left))>area){
                area=temp*(right-left);
         }
         if(temp==height[left]){
            do{
                left++;
            }while(height[left]<temp && left<height.size());
         }else{
            do{
                right--;
            }while( height[right]<=temp && right>0);
         }
    }

    return area;
}


int most_water(vector<int>& height){ //brute force method
    int area=0;
    int n=height.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
             int temp=min(height[i],height[j]);
             if((temp*(i-j))>area){
                area=temp*(i-j);
             }
        }
    }
    return area;
}

int main(){
   vector<int> height;
   height.push_back(1);
   height.push_back(1);
   /*height.push_back(6);
   height.push_back(2);
   height.push_back(5);
   height.push_back(4);
   height.push_back(8);
   height.push_back(3);
   height.push_back(7);*/

   cout<<most_water_two(height)<<endl;

return 0;
}
