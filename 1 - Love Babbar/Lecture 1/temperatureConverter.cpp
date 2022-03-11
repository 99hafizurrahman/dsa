#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// celcius to fahrenheit

float celToFah(float c){
  return (c*9/5)+32;
}

// fharenheit to celsius

float fahToCel(float f){
  return (f-32)*5/9;
}

int main() {
int choice;
  float temp;
  cout<<"Enter your choice : "<<endl;
  cout<<"1 - Celsius to fahrenheit."<<endl;
  cout<<"2 - Fahrenhiet to celsius."<<endl;
  cin>>choice;
  cout<<"Enter temperature : ";
  cin>>temp;
  
  switch(choice){
    case 1 : cout<<temp<<" Celsius == "<<celToFah(temp)<<" Fahrenheit"<<endl;
    break;
    case 2 : cout<<temp<<" Fahrenheit == "<<fahToCel(temp)<<" Celsius"<<endl;
    break;
    default : cout<<"Wrong choice!"<<endl;
    
  }
  return 0;
}