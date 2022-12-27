#include<iostream>
using namespace std;
#define n 10
class Stack

{

int top =-1;
int array[n];

public:

void push(int x)
{
if(top>=n-1)
{
cout<<"stack overflow "<<endl;
}
else
{
top++;
array[top] = x; 
}
}

void pop()
{
if(top<=-1)
{
cout<<"stack underflow"<<endl;
}
else
{
cout<<"the element to be poped is: "<< array[top]<<endl;
top--;
}
}

void display()
{
if(top<=-1)
{
cout<<"stack underflow"<<endl;
}
else
{
cout <<"the content of the stack are: ";
for(int i=top;i>=0;i--)
{
cout<<array[i]<<" " ;
}
cout<<endl;
}
}
};





int main()

{

Stack s;

s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.pop();
s.pop();
s.display();

}

