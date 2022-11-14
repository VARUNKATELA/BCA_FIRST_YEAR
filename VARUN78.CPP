#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int bs,gs,hra,da;
cout<<"Enter Basic Salary >> ";cin>>bs;
if (bs<=10000)
{
da=(bs*80)/100;
hra=(bs*20)/100;
cout<<"Amount of DA is  : "<<da<<endl;
cout<<"Amount of HRA is : "<<hra<<endl;
gs=bs+da+hra;
cout<<"Gross Salary     : "<<gs<<endl;
}
else if (bs>10000 && bs<=20000)
{
da=(bs*90)/100;
hra=(bs*25)/100;
cout<<"Amount of DA is  : "<<da<<endl;
cout<<"Amount of HRA is : "<<hra<<endl;
gs=bs+da+hra;
cout<<"Gross Salary     : "<<gs;
}
else if (bs>20000)
{
da=(bs*95)/100;
hra=(bs*30)/100;
cout<<"Amount of DA is  : "<<da<<endl;
cout<<"Amount of HRA is : "<<hra<<endl;
gs=bs+hra+da;
cout<<"Gross Salary     : "<<gs;
}
getch();
}