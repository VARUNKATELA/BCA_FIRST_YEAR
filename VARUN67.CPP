#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int y,w,d;
y=(d/365);
w=(d%365)/7;
d=d-((y*365)+(w*7));
cout<<"Years : "<<y<<endl;
cout<<"Weeks : "<<w<<endl;
cout<<"Days : "<<d<<endl;
getch();
}