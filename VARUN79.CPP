#include<iostream.h>
#include<conio.h>
/*void series();
void series2();
void series3();
void series4();
void series5();
int series6();
int series7();
int series8();
void series9();  */
int series10();
void main()
{
clrscr();
/*
series();
series2();
series3();
series4();
series5();
int sum=series6();
cout<<sum;
cout<<endl<<"--------------------------------------"<<endl;
int s=series7();
cout<<s;
cout<<endl<<"--------------------------------------"<<endl;
int u=series8();
cout<<u;
cout<<endl<<"--------------------------------------"<<endl;
series9(); */
int m=series10();
cout<<m;
cout<<endl<<"--------------------------------------"<<endl;
getch();
}           /*
void series()
{
int n;cout<<"Enter the value of N : ";cin>>n;
for(int i=1;i<=n;i++)
cout<<i<<" ";
cout<<endl<<"--------------------------------------"<<endl;
}

void series2()
{
int n;cout<<"Enter the value of N : ";cin>>n;
for(int i=n;i>=1;i--)
cout<<i<<" ";
cout<<endl<<"--------------------------------------"<<endl;
}

void series3()
{
for(char i='a';i<='z';i++)
cout<<i<<" ";
cout<<endl<<"--------------------------------------"<<endl;
}

void series4()
{
for(int i=1;i<=100;i++)
{
if(i%2==0)
cout<<i<<" ";
}
cout<<endl<<"--------------------------------------"<<endl;
}

void series5()
{
for(int i=1;i<=100;i++)
{
if(i%2!=0)
cout<<i<<" ";
}
cout<<endl<<"--------------------------------------"<<endl;
}

/*int series6()
{
int n,sum=0;cout<<"Enter the value of N : ";cin>>n;
for(int i=1;i<=n;i++)
sum=sum+i;
return sum;
}

int series7()
{
int sum=0,n;cout<<"Enter the value of N : ";cin>>n;
for(int i=1;i<=n;i++)
if(i%2==0)
sum=sum+i;
return sum;
}

int series8()
{
int sum=0,n;cout<<"Enter the value of N : ";cin>>n;
for(int i=1;i<=n;i++)
if(i%2!=0)
sum=sum+i;
return sum;
}

void series9()
{
long int n;cout<<"Enter the value of N : ";cin>>n;
for(long int i=1;i<=10;i++)
cout<<n<<"x"<<i<<" = "<<i*n<<endl;
cout<<"---------------------------------------"<<endl;
} */

int series10()
{
int n,r1,r2,r3,sum=0;
cout<<"Please Enter Three Digit Value of N : ";cin>>n;
r1=n%10;
n=n/10;
r2=n%10;
n=n/10;
r3=n%10;
n=n/10;
sum=r1+r2+r3;
return sum;
}