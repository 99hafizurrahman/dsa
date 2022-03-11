#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int s){
  
  for(int i=0; i<size;i++){
    if(s==arr[i])
    return true;}
     
  return false;
}

int main(){
  int n;
  cout<<"Enter the number you want to search : ";
  cin>>n;
 
 int arr[10]={-1,2,-3,4,5,10,20,8,-3,1};

  for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
 }
  cout<<endl;

  bool isFound = linearSearch(arr,10,n);
  if(isFound){
    cout<<n<<" is found in Array."<<endl;
  }else{
    cout<<n<<" is not found!";
  }
  
  return 0;
}
