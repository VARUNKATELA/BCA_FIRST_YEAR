#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
unsigned int d;
cout<<"Enter the number of Day (1/7) : ";
cin>>d;
if (d==1)
{
cout<<"Monday";
}
else if (d==2)
{
cout<<"Tuesday";
}
else if (d==3)
{
cout<<"Wednesday";
}
else if (d==4)
{
cout<<"Thursday";
}
else if (d==5)
{
cout<<"Friday";
}
else if (d==6)
{
cout<<"Saturday";
}
else if (d==7)
{
cout<<"Sunday";
}
else
{
cout<<"Invalid Number, Please Enter Between 1 to 7";
}
getch();
}