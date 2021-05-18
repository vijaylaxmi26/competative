#include<bits/stdc++.h>
using namespace std;

float median(int n,int arr1[],int m,int arr2[]){
   int i=0,j=0,k=0;
   float mid;
   int arr3[n+m]={0};

   while(i<n || j<m){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
    }else{
        arr3[k]=arr2[j];
        j++;
    }
    k++;
   }

   if(i<n){
       while(i<n){
        arr3[k]=arr1[i];
        i++;k++;
       }
   }else{
       while(j<m){
        arr3[k]=arr2[j];
        k++;j++;
       }
   }

   for(int i=0;i<(n+m);i++){
      cout<<arr3[i]<<" ";
   }
   cout<<endl;

   if(((n+m)%2)==0){
      int x=(n+m)/2;
      cout<<arr3[x]<<" "<<arr3[x+1]<<endl;
      mid=(arr3[x-1]+arr3[x])/2;
   }else{
       int x=(n+m)/2;
      mid=(arr3[x]);
   }


   return mid;
}
int main(){
    int arr1[]={1,12,15,26,38};
    int arr2[]={2,13,17,30,45};

    cout<<median(5,arr1,5,arr2);

return 0;
}
