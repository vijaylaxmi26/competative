#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void max_sumsubarray(int a[],int n){
    int max_end=0,max_so=0,i;
   for(i=0;i<n;i++){
		max_end+=a[i];
		if(max_end<0){
			max_end=0;
		}
		if(max_so<max_end){
			max_so=max_end;
		}
	}

	printf("%d\n",max_so);

}

void zero_element(int a[],int n){
  int max_so=0,max_end=0,i,in1,in2,j1,j2;
  stack<int> s;
  int min_v=0;
  for(int i=0;i<n;i++){
    if(a[i]<0){
        s.push(a[i]);
    }
    if(a[min_v]>a[i]){
        min_v=i;
    }
  }
  if(s.size()==0){
    a[min_v]=0;
  }else{
  for(i=0;i<n;i++){
    if(a[i]<0){
        if(max_end==0){
            in1=i;
            in2=i;
        }else{
          in2=i;
        }
        max_end+=a[i];
    }
    if(a[i]>0){
        max_end=0;
    }
    if(max_so>=max_end){
        max_so=max_end;
        j1=in1;
        j2=in2;
    }
  }

  for(int i=j1;i<=j2;i++){
    a[i]=0;
  }
  }

   max_sumsubarray(a,n);
}


int main(){
   int n=11;
    int a[]={-2,-4,5,6,-1,-2,6,-7,4,2,-1};

    zero_element(a,n);
}
