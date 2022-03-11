#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findMax(int arr[], int size){
  int maxi=INT_MIN;
  for(int i=0;i<size;i++){
    //max funtion work same as if function
    maxi = max(maxi,arr[i]);
    // if(i>=max) max=arr[i];
  }
  return maxi;
}

int findMin(int arr[], int size){
  int mini=INT_MAX;
  for(int i=0;i<size;i++){
    //min function work as if condition
    mini = min(mini,arr[i]);
    // if(i<=min) min=arr[i];
  }
  return mini;
}

int main() {

  int arr[6]={12,10,14,3,4,8};
  cout<<"Maximum is : "<<findMax(arr,6)<<endl;
  cout<<"Minimum is : "<<findMin(arr,6)<<endl;
  
  int large = 30;
  int big=0;
  //if large variable greater than 10 then assing into big otherwise not
  big =max(large,10);
  cout<<big;
  
  return 0;
}