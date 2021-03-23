#include<bits/stdc++.h>
#include<limits>
using namespace std;

int bottom_up_method(int a[],int n){
    int r[n+1]={0};
    for(int j=1;j<=n;j++){
       int q=INT_MIN;
        for(int i=1;i<=j;i++){
            q=max(q,a[i]+r[j-i]);
        }
        r[j]=q;
    }

    return r[n];
}
int topdownmaxcost(int a[],int n,int r[]){
	int q=-1;
	if(r[n]>0){
		return r[n];
	}

	if(n==0){
		return 0;
	}else{
		for(int i=1;i<n+1;i++){
			q=max(q,a[i]+topdownmaxcost(a,n-i,r));
		}
	  r[n]=q;
	}


	return q;
}

int max_cut_rod(int a[],int n){
	int r[n+1]={-1};

	return topdownmaxcost(a,n,r);
}


int max_cost(int a[],int n){
	int q=0;
	if(n==0)
	   return 0;
	else
	   for(int i=1;i<n+1;i++){
	   	   q=max(q,a[i]+max_cost(a,n-i));
	   }
  return q;

}

int main(){
	int n;
	printf("Length of rod: ");
	scanf("%d",&n);
	int a[n+1];
	a[0]=0;
	for(int i=1;i<n+1;i++)
	  scanf("%d",&a[i]);

	  printf("Methods:\n1.Recurrsive\n2.Top-down\n3.Bottom-up\n");
	  printf("Enter your method: ");
	  int x;
	  scanf("%d",&x);

	  switch(x){
	      case 1: cout<<"Rrcurrsive Solution:: "<<max_cost(a,n);
	      break;
	      case 2:
                cout<<"Top-down Solution:: "<<max_cut_rod(a,n);
	      break;
	      case 3:
             cout<<"Bottom-up Solution:: "<<max_cut_rod(a,n);
	      break;
          default:
            cout<<"invalid operation";
	  }

 return 0;
}
