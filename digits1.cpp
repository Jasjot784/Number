#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter a number"<<endl;
  cin>>a;
  int count =0;
  while(a)
  {
    a=a/10;
    count++;
  }
  cout<<" number of digits are "<<count;
}
