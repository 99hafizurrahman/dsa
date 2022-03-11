#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void update(int arr[],int size){
  for(int i=0;i<size;i++)
  arr[i]*=arr[i];
}

int main() {

 int arr[5]={1,2,3,4,5};
 update(arr,5);
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  
  return 0;
}