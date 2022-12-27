#include<iostream>

using namespace std;



void add( int a[10][10], int b[10][10], int o)

{

cout<<"adition: "<<endl;

for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cout<<a[i][j]+b[i][j]<<"\t";

}

cout<<endl;

}

}



void sub( int a[10][10], int b[10][10], int o)

{

cout<<"subtraction: "<<endl;

for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cout<<a[i][j]-b[i][j]<<"\t";

}

cout<<endl;

}

}



void mul( int a[10][10], int b[10][10], int o)

{
    int c[10][10];
    

cout<<"multiplication: "<<endl;

for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

c[i][j]=0;

for(int k=0;k<o;k++)

{

c[i][j]+=a[i][k]*b[k][j];

}

}

}



for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cout<<c[i][j]<<"\t";

}

cout<<endl;

}

}





void trans( int a[10][10], int o)

{

cout<<"transpose: "<<endl;

for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cout<<a[j][i]<<"\t";

}

cout<<endl;

}

}





int main()

{

int o;

cout<<"enter order of matrix : "<<endl;

cin>>o;



int a[10][10],b[10][10],c[10][10];

cout<<"enter  matrix 1 element : "<<endl;



for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cin>>a[i][j];

}

}



cout<<"enter  matrix2 element : "<<endl;



for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cin>>b[i][j];

}

}



cout<<"matrix 1 : "<<endl;



for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cout<<a[i][j]<<"\t";

}

cout<<endl;

}



cout<<"matrix 1 : "<<endl;



for(int i=0;i<o;i++)

{

for(int j=0;j<o;j++)

{

cout<<a[i][j]<<"\t";

}

cout<<endl;

}



add(a,b,o);

sub(a,b,o);

mul(a,b,o);

trans(a, o);

}
