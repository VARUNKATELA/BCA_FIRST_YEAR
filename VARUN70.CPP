#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int p,j,u,pf,esi_no,b,e_id;
float bw,ca,ma,oa,hra,te,epf,pt,tds,esi,td,ns;
char c_name[30];
char address[55];
char e_name[30];
char desig[15];
char d[10];
char b_name[20];
clrscr();
cout<<"p       is    : Pay Slip for \n";cout<<"j       is    : \n";cout<<"u       is    : \n";cout<<"pf      is    : PF No. \n";cout<<"esi_no. is    : \n";cout<<"b       is    : \n";cout<<"e_id    is    : \n";
cout<<"bw      is    : \n";cout<<"ca      is    : \n";cout<<"ma      is    : \n";cout<<"oa      is    : \n";cout<<"hra     is    : \n";cout<<"te      is    : \n";cout<<"epf     is    : \n";cout<<"pt      is    : \n";cout<<"tds     is    : \n";cout<<"esi     is    : \n";cout<<"td      is    : \n";cout<<"ns      is    : \n";
cout<<"c_name  is    : Name of Company \n";cout<<"address is    : Address of Company \n";cout<<"e_name  is    : Employee Name \n";cout<<"desig   is    : \n";cout<<"d       is    : \n";cout<<"b_name  is    : \n"<<endl;

cout<<" __________________________________________________"<<endl;
cout<<"|Enter the name of Company         :               |";cin>>c_name;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Address of the Company      :               |";cin>>address;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Pay Slip for July 2022      :               |";cin>>p;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter name of Employee            :               |";cin>>e_name;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Employee ID                 :               |";cin>>e_id;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Designation                 :               |";cin>>desig;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Department                  :               |";cin>>d;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Date of Joining             :               |";cin>>j;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter UAN No.                     :               |"; cin>>u;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter PF No.                      :               |";cin>>pf;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter ESI no.                     :               |";cin>>esi_no;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Bank Name                   :               |";cin>>b_name;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter Bank A/c No.                :               |";cin>>b;
cout<<"|__________________________________________________|"<<endl;
clrscr();
cout<<" __________________________________________________"<<endl;
cout<<"| Earnings                                         |"<<endl;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter the value of Basic Wages            :       |";cin>>bw;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter the value of Conveyance Allowances  :       |";cin>>ca;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter the value of Medical Allowances     :       |";cin>>ma;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Enter the value of Other Allowances       :       |";cin>>oa;
cout<<"|__________________________________________________|"<<endl;
cout<<"|HRA                                       :       |"<<hra<<endl;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Total Earings                             :       |"<<te<<endl;
cout<<"|__________________________________________________|"<<endl;
hra=(bw*10.0)/100.0;
te=bw+ca+ma+oa+hra;
cout<<" __________________________________________________"<<endl;
cout<<"| Dedudctions                                      |\n";
cout<<"|__________________________________________________|"<<endl;
cout<<"|EPF                                       :       |";cin>>epf;
cout<<"|__________________________________________________|"<<endl;
pt=(te*5.0)/100.0;
cout<<"|Professional Tax                          :       |";cin>>pt;
cout<<"|__________________________________________________|"<<endl;
cout<<"|TDS                                       :       |";cin>>tds;
cout<<"|__________________________________________________|"<<endl;
cout<<"|ESI/Health Insurance                      :       |";cin>>esi;
cout<<"|__________________________________________________|"<<endl;
cout<<"|Total Deductions                          :       |"<<td<<endl;
cout<<"|__________________________________________________|"<<endl;
td=epf+pt+tds+esi;
ns=te-td;
cout<<" __________________________________________________"<<endl;
cout<<"|Net Salary                                :       |"<<ns<<endl;
cout<<"|__________________________________________________|"<<endl;
getch();
}