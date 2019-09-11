#include<iostream>
using namespace std;
int main()
{
  int a,c;
  cout<<"enter a number"<<endl;
  cin>>a;
  int rev =0;
  while(a)
  {
    c=(a%10);
    a=a/10;
    rev=rev*10+c;
  }
cout<<"reverse of number is "<<rev<<endl; 
}
