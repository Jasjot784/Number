#include<iostream>
using namespace std;
int main()
{
  int a,o=0,e=0,prime=0;
  cout<<"enter a number"<<endl;
  cin>>a;
  int c=0;
  while(a>0)
  {
    if((a%2)==0)
    {
      e++;
    }
    if((a%2)==1)
    {
      o++;
    }
    if(a>1)
    {if(a==2)
    prime++;
    if(a!=2)
    {
    for(int i=2;i<a;i++)
    {
      c=(a%i);
      if(c==0)
      break;
    }
    if(c!=0)
    prime++;
  }}
  a--;
}
cout<<"even terms are "<<e<<endl;
cout<<"odd terms are "<<o<<endl;
cout<<"prime terms are "<<prime<<endl;
}
