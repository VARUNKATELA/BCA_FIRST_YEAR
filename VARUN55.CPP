#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
c=a+b;
a=c-a;
b=c-b;
cout<<"a : "<<a<<endl;
cout<<"b : "<<b<<endl;
getch();
}