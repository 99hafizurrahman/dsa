#include <iostream>
#include<vector>
#include<cmath>
using namespace std;


int main() {
vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  //output
  cout<<"Output using for loop"<<endl;
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

  cout<<endl;

  //2nd way to iterate vector
  cout<<"Output using Iterate Vector : "<<endl;
  vector<int>::iterator it;
  for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";

  
  cout<<endl;

  //delete vector element 
  // v.pop_back();
  
  //3rd way to iterate vector
  cout<<"3rd way to iterate vector : "<<endl;
  
  for(auto element:v)
    cout<<element<<" ";

  cout<<endl;
  // 2nd WAY TO CREATE VECTOR
  cout<<"2nd way to create vector : "<<endl;
  vector<int> v2 (3,50);
  for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";

  cout<<endl;
  swap(v,v2);
   cout<<"After swap"<<endl;
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

  cout<<endl;

}