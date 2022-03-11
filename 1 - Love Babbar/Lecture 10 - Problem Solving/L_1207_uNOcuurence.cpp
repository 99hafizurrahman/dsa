#include <iostream>
#include<cmath>
using namespace std;

void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}

void findUnique(int arr[],int size){

  int ans = 0,count=0;
  int ele[3]={0};
  for(int i=0;i<size;i++){
       count=0;
      
       for(int j=i;j<size;j++){
        if((arr[i]^arr[j])==0)
          count++;
    }
    ele[i]=count;

    
  }
 printArray(ele,3);
}


int main() {
  
  int arr[6]={1,2,2,3,3,3};
 
  findUnique(arr,6);

}