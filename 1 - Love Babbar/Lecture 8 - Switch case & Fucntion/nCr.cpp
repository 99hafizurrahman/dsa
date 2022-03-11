
#include<bits/stdc++.h>
using namespace  std;

int fact (int num){
  int ans =1;
  for(int i=1;i<=num;i++)
    ans*=i;
  return ans;
}

int nCr(int n, int r){

  int ans = fact(n)/(fact(r) * fact(n-r));
  return ans;

//nCr = n!/r! * !(n-r factorial
  
}
int main() {

  int n,r,result=0;
  cout<<"Enter n and r value"<<endl;
  cin>>n>>r;
  result = nCr(n,r);
  cout<<result;
  
}