#include<iostream>
#include<vector>
#include<limits>
#include <chrono>
using namespace std::chrono;
using namespace std;

void min_distance(int n){
    int points[n][n];

     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         cin>>points[i][j];
      }
    }

   int travelled_point[n]={0};
    int i=0,j=0,k=0;
    int distance=0,mindis=INT_MAX;
    int route[n]={0};

    travelled_point[0]=1;

    while(i<n && j<n){

        if(k>=n-1)
            break;

        if(i!=j && (travelled_point[j]==0) && points[i][j]>0){
            if(points[i][j]<mindis){
                mindis=points[i][j];
                route[k]=j+1;
            }
        }
        j++;

        //cout<<mindis<<endl;
        if(j==n){
            //cout<<mindis<<endl;
            distance += mindis;
            mindis=INT_MAX;
            travelled_point[route[k]-1]=1;
            j=0;
            i=route[k]-1;
            k++;
        }

    }

    i=route[k-1]-1;
    for(j=0;j<n;j++){
        if(i!=j && points[i][j]<mindis && points[i][j]>0){
            mindis=points[i][j];
            route[k]=j+1;
        }
    }

    distance+= mindis;

    cout<<"\n-------------------------------------------------\n";
    cout<<"MINIMUM TRAVELED DISTANCE: "<<distance<<endl;
    cout<<"\n-------------------------------------------------\n";
    cout<<"\nPATH OF TRAVEL"<<endl;
    cout<<"1";
    for(int i=0;i<n;i++){
        cout<<"->"<<route[i];
    }
    cout<<endl;

  return;
}
int main(){
  int n;
  cout<<"how many station in traveling : ";
  cin>>n;

   auto start = high_resolution_clock::now();

    min_distance(n);

   auto stop = high_resolution_clock::now();
    cout<<"\n-------------------------------------------------\n";
    cout <<endl<< "Time taken by traveling sales man using greedy approch in microseconds : "
        << chrono::duration_cast<chrono::microseconds>(stop - start).count()<< " microseconds" << endl;

  return 0;
}
