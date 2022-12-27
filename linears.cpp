#include<iostream>
using namespace std;

void linear(int a[],int n, int key)
{
int flag =0;
for (int i=0; i<n;i++)
{
if(a[i]==key)
{
flag =1;
cout<<"student found at "<<(i+1)<<" position"<<endl;
break;
}
}
if (flag==0)
{
cout<<"student not found"<<endl;
}
}

int main()
{
int n;
cout<<"enter the no of studends "<<endl;
cin>>n;

int a[n];
cout<<"enter roll no of students "<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}

int key;
cout<<"enter the roll no to search: "<<endl;
cin>>key;

linear(a,n,key);
return 0;
}

