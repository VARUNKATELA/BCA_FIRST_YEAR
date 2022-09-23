#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int a,b,c,d,e,f,h,i,j,k,g,r,t,y,z;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
r=pow(a,b);
cout<<r<<endl;
cout<<"Enter the value of c : ";
cin>>c;
cout<<"Enter the value of d : ";
cin>>d;
t=pow(c,d);
cout<<t<<endl;
cout<<"Enter the value of e : ";
cin>>e;
cout<<"Enter the value of f : ";
cin>>f;
cout<<"Enter the value of g : ";
cin>>g;
y=pow(e,(f+g));
cout<<y<<endl;
cout<<"Enter the value of h : ";
cin>>h;
cout<<"Enter the value of i : ";
cin>>i;
cout<<"Enter the value of j : ";
cin>>j;
cout<<"Enter the value of k : ";
cin>>k;
z=pow(h,i)+pow(j,k);
cout<<z;
getch();
}