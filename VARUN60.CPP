#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int m,n,r1,r2,r3,sum;
cout<<"Enter the value of m :  ";
cin>>m;
n=m;
r1=m%10;
m=m/10;
r2=m%10;
m=m/10;
r3=m%10;
m=m/10;
sum=r1+r2+r3;
cout<<"Sum : "<<sum<<endl;
cout<<n;
getch();
}