#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int binarySearch(int arr[],int size, int key){
  int start = 0;
  int end = size-1;
  int mid = start + (end-start)/2;
  int count = 0;
  while(start<=end){
    
    if(arr[mid]==key){
      cout<<key<<" found in index of : "<<mid<<endl;
      return mid;
    }else if(key>arr[mid]){
      start = mid+1;
    }else{
      end = mid-1;
    }
    
       mid = start + (end-start)/2;
  }
  cout<<key <<" not found in array!"<<endl;
  return -1;
}
int main(){
  int even[10] = {2,4,6,12,18,24,26,29,31,50};
  int odd[7]={3,5,7,8,10,15,17};
  binarySearch(even,10,31);
  binarySearch(odd,7,10);
}