#include<iostream>
using namespace std;
int main()
{
int num,n,i,count;
cout<<" no. of element of array";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
 {
      cin>>a[i];
 }
 cout<<" enter the number to be deleted"<<endl;
 cin>>num;
  for(i=0;i<n;i++)
  {
   if(a[i]==num)
    {
      cout<<a[i]<<"is found at"<<i<<endl;
      count=1;
    }
  }
  if (count!=1)
  {
  cout<<"element not found";
  }
  }
