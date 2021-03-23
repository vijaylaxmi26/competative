#include<stdio.h>

struct pair{
	int min;
	int max;
};

struct pair values(int a[],int n){
	struct pair val;
	val.max=a[0];
	val.min=a[0];
	int i;
	for(i=0;i<n;i++){
		if(val.max<a[i]){
			val.max=a[i];
		}
		if(val.min>a[i]){
			val.min=a[i];
		}
	}
	
	return val;
}

int main(){
	int a[]={13,46,245,564,2574,257,243,476,7,5,2346,23,465,36,34,3,35,7};
	struct pair val=values(a,18);
	printf("maximum value: %d\nminimum value: %d",val.max,val.min);
	return 0;
}
