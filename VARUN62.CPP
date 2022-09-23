#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ts,s,m,h,t;
ts=3678;
t=ts;
h=t/3600;
t=t%3600;
m=t/60;
s=t%60;
cout<<"Hour : "<<h<<endl;
cout<<"Minute : "<<m<<endl;
cout<<"Second : "<<s<<endl;
getch();
}