#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int  sumOfArrayElement(int arr[],int size){
  int sum = 0;
  for(int i=0;i<size;i++)
  sum+=arr[i];
  return sum;
}

int main() {

 int arr[5]={1,2,-3,4,5};
 int sum = sumOfArrayElement(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  cout<<": sum is  "<<sum<<endl;
  
  return 0;
}

