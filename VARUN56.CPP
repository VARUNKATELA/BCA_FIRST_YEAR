#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<"a : "<<a<<endl<<"b : "<<b;
getch();
}