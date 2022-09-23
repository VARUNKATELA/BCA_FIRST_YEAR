#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,s,area;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
cout<<"Enter the value of c : ";
cin>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<area;

getch();
}