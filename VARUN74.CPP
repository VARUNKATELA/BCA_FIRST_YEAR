#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"Enter the value of A B C : ";cin>>a>>b>>c;
if (a>b)
{
if (a>c)
cout<<"Largest No. is a : "<<a;
else
cout<<"Largest No. is c : "<<c;
}
else
{
if (b>c)
cout<<"Largest No. is b : "<<b;
else
cout<<"Largest No. is c : "<<c;
}
getch();
}