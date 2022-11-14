#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"Enter th value of N : ";cin>>n;
if (n%5==0 && n%11==0)
{
cout<<"                         \n";
cout<<"The no. can be divisible by 5 as well as 11";
}
else
{
cout<<"                         \n";
cout<<"The no. can't be divisible 5&11";
}
getch();
}