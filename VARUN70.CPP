#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int p,j,u,pf,esi,b,e_id;
char c_name[30];
char address[55];
char e_name[30];
char desig[15];
char d[10];
char b_name[20];
cout<<"Pay Slip for July 2022 : ";
cin>>p;
cout<<"Date of Joining        : ";
cin>>j;
cout<<"UAN                    : ";
cin>>u;
cout<<"PF No.                 : ";
cin>>pf;
cout<<"ESI No.                : ";
cin>>esi;
cout<<"Bank A/c No.           : ";
cin>>b;
cout<<"Employee ID            : ";
cin>>e_id;
cout<<"Company Name           : ";
cin>>c_name;
cout<<"Address of the Company : ";
cin>>address;
cout<<"Name of the Employee   : ";
cin>>e_name;
cout<<"Designation            : ";
cin>>desig;
cout<<"Department             : ";
cin>>d;
cout<<"Bank Name              : ";
cin>>b_name;
cout<<"Company Name              : "<<c_name<<endl;
cout<<"Address of the Company    : "<<address<<endl;
cout<<"Pay slip for July 2022    : "<<p<<endl;
cout<<"Name of the Employee      : "<<e_name<<endl;
cout<<"Employee ID               : "<<e_id<<endl;
cout<<"Designation               : "<<desig<<endl;
cout<<"Department                : "<<d<<endl;
cout<<"Date of Joining           : "<<j<<endl;
cout<<"UAN                       : "<<u<<endl;
cout<<"PF No.                    : "<<pf<<endl;
cout<<"ESI No.                   : "<<esi<<endl;
cout<<"Bank Name                 : "<<b_name<<endl;
cout<<"Bank A/c No.              : "<<b<<endl;
getch();
}