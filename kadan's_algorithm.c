#include<stdio.h>
int main(){
	int n=10;
	int a[]={-2,5,6,-7,2,-2,1,6,8,-1};
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
	
	printf("%d maximum sum of subarray.",max_so);
}
