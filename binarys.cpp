#include<iostream>
using namespace std;

void binary(int a[],int n,int key)
{
int flag= 0;
int lb=0;
int ub =n;

while(lb<=ub)
{
int mid= (ub+lb)/2;
if (a[mid]==key);
{
cout <<"students found at "<<(mid+1)<<" position"<<endl;
flag = 1;
break;
}

if(a[mid]>key)
{
ub = mid-1;
}
else
{
lb=mid+1;
}

}
if (flag==0)
{
cout<<"stdent not foud"<<endl;
}

}







int main()
{

int n;
cout <<"enter the number of students"<<endl;
cin>> n;

int a[n];
cout<<"enter the roll num of students: "<<endl;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int key;
cout<<"enter student roll no to search: "<<endl;
cin>>key;

binary(a,n,key);
return 0;

}
