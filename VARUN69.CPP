#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float p,r,n,t,a;
cout<<"Enter the value of P : ";
cin>>p;
cout<<"Enter the value of R : ";
cin>>r;
cout<<"Enter the value of N : ";
cin>>n;
cout<<"Enter the value of T : ";
cin>>t;
a=p*(1+r/n)*n*t;
cout<<"Compound Interest : "<<a;
getch();
}