#include <iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter a 3 digit number"<<endl;
  cin>>a;
  int u,t,h;
  u=(a%10);
  a=a/10;
  t=(a%10);
  a=a/10;
  h=(a%10);
  cout<<"unit digit is "<<u<<endl;
  cout<<"tens digit is "<<t<<endl;
  cout<<"hunderedth digit is "<<h<<endl;
}
