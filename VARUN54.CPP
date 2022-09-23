#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,qe;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
cout<<"Enter the value of c : ";
cin>>c;
qe=-b-sqrt((b*b)-4*a*c)/(2*a);
cout<<"QE : "<<qe;
getch();
}