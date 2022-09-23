#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char i1[4];
char i2[9];
char i3[5];
unsigned int q1,q2,q3,r1,r2,r3,t1,t2,t3,gt;
cout<<"Enter the name of i1 : ";
cin>>i1;
cout<<"Enter the name of i2 : ";
cin>>i2;
cout<<"Enter the name of i3 : " ;
cin>>i3;
cout<<"Enter the value of q1 : ";
cin>>q1;
cout<<"Enter the value of q2 : ";
cin>>q2;
cout<<"Enter the value of q3 : ";
cin>>q3;
cout<<"Enter the value of r1 : ";
cin>>r1;
cout<<"Enter the value of r2 : ";
cin>>r2;
cout<<"Enter the value of r3 : ";
cin>>r3;
t1=q1*r1;
t2=q2*r2;
t3=q3*r3;
cout<<"t1 : "<<t1<<endl;
cout<<"t2 : " <<t2<<endl;
cout<<"t3 : "<<t3<<endl;

gt=t1+t2+t3;
cout<<"Grand Total : "<<gt;
getch();
}