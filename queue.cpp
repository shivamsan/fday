#include<iostream>
using namespace std;
#define n 5

class Queue
{

int front =-1;
int rear =-1;
int array[n];

public:

void enque(int x)
{
if (rear>=n-1)
{
cout<<"overflow"<<endl;
}
else
{
rear++;
array[rear]=x;
}
}

void deque()
{
if(rear==front)
{
cout<<"underflow"<<endl;
}
else
{
cout<<"the element to be poped out is: "<<endl;
front++;
cout<<array[front]<<endl;

}
}
void display()
{
if(rear==front)
{
cout<<"underflow"<<endl;
}
else
{
cout <<"the contents of the queue are: "<<endl;
for (int i=front+1;i<=rear;i++)
{
cout<<array[i]<<" ";
}
cout<<endl;
}
}


};

int main()
{

Queue q;

q.enque(10);
q.enque(20);
q.enque(30);
q.enque(40);
q.enque(50);
q.deque();
q.display();
}
