#include<bits/stdc++.h>
using namespace std;

double median(vector<int> vec1,vector<int> vec2){
    int start=0,en=0,positionx=0,positiony=0;

    if(vec1.size()>vec2.size()){
        vec1.swap(vec2);
    }

    int n=vec1.size();
    int m=vec2.size();

    en=n;
    while(start<=en){
        positionx = (start+en)/2;
        positiony=(n+m+1)/2-positionx;

        int maxleftx=(positionx==0)? INT_MIN : vec1[positionx-1];
        int minrightx=(positionx==n)? INT_MAX : vec1[positionx];

        int maxlefty=(positiony==0)? INT_MIN : vec2[positiony-1];
        int minrighty=(positiony==m)? INT_MAX : vec2[positiony];

        if(maxleftx<=minrighty && maxlefty<=minrightx){

            if((n+m)%2==0){
                cout<<max(maxleftx,maxlefty)<<" "<<min(minrightx,minrighty)<<endl;
                 return (double)(max(maxleftx,maxlefty)+ min(minrightx,minrighty))/2;

            }else{
                double mid = max(maxleftx,maxlefty);
                return mid;
            }
        }else if(maxleftx>minrighty){
            en=positionx-1;
        }else{
            start = positionx+1;
        }
    }


}
int main(){
     vector<int> vec1,vec2;
     vec1.push_back(1);
     vec1.push_back(2);
     //vec1.push_back(15);
     //vec1.push_back(26);
     //vec1.push_back(38);

     vec2.push_back(3);
     vec2.push_back(4);
     //vec2.push_back(17);
     //vec2.push_back(30);
     //vec2.push_back(35);

     cout<<median(vec1,vec2);

return 0;
}
