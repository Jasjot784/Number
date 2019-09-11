#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  int c=0;
  cout<<"enter a number"<<endl;
  cin>>a;
  if(a<2){
    cout<<a<<" is not prime"<<endl;
  }
  else if(a==2){
    cout<<a<<" is prime"<<endl;
    }
  else{
  for(int i=2;i<a;i++)
  {
    c=(a%i);
    if((a%i)==0)
    {
      cout<<a<<" is not prime"<<endl;
      break;
    }
  }
  if(c!=0)
  {
    cout<<a<<" is prime"<<endl;
  }
}
}
