#include<iostream>
using namespace std;
#define n 10

class Job
{
int front=-1;
int rear=-1;
int array[n];

public:
void add_job(int x)
{
if (rear>=n-1)
{
cout<<"overflow"<<endl;
}

rear++;
array[rear]=x;

}

void del_job()
{
if(rear==front)
{
cout<<"underflow"<<endl;
}

front++;
cout<<" the job to be deleted is : "<<array[front]<<endl;

}

void display()
{
if(rear==front)
{
cout<<"underflow"<<endl;
}
else
{

cout<<"the jobs in queue are: "<<endl;
for(int i =front+1; i<=rear;i++)
{
cout<<array[i]<< " " ;

}
cout<<endl;
}
}

};





int main()
{

Job j;

int ch,x;
do
{
cout<<" menu"<<endl;
cout<<"enter choice";
cin>>ch;
switch(ch)
{

case 1:
cout<<"enter job to add"<<endl;
cin>>x;
j.add_job(x);
break;

case 2:

j.del_job();
j.display();
break;

case 3:
j.display();
break;

case 4:
cout<<"exit";
break;

default:
cout<<"invalid choice";
break;

}
}
while(ch!=4);
return 0;
}
