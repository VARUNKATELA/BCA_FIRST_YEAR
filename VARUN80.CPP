#include<iostream.h>
#include<conio.h>
void series1();
void series2();
void series3();
void series4();
void series5();
void series6();
void series7();
void series8();
void series9();
void series10();
void series11();
void series12();
void main()
{
clrscr();
series1();
series2();
series3();
series4();
series5();
series6();
series7();
series8();
series9();
series10();
series11();
series12();
getch();
}
void series1()
{
for (int i=1;i<=10;i++)
cout<<i<<" ";
cout<<endl;
}

void series2()
{
for (int i=2;i<=20;i=i+2)
cout<<i<<" ";
cout<<endl;
}

void series3()
{
for(int i=1;i<=21;i=i+2)
cout<<i<<" ";
cout<<endl;
}

void series4()
{
for(int i=10;i<=100;i=i+10)
cout<<i<<" ";
cout<<endl;
}

void series5()
{
for(int i=17;i<=26;i++)
cout<<i<<" ";
cout<<endl;
}

void series6()
{
for(int i=-10;i<=-1;i++)
cout<<i<<" ";
cout<<endl;
}

void series7()
{
for(int i=10;i>=1;i--)
cout<<i<<" ";
cout<<endl;
}

void series8()
{
for(int i=26;i>=17;i--)
cout<<i<<" ";
cout<<endl;
}

void series9()
{
for(int i=1;i<=10;i++)
if (i%3!=0)
cout<<i<<" ";
cout<<endl;
}

void series10()
{
for(int i=1;i<=10;i++)
if (i-4!=0)
cout<<i<<" ";
cout<<endl;
}

void series11()
{
for(int i=1;i<=10;i++)
cout<<i<<"/"<<i<<" ";
cout<<endl;
}

void series12()
{
for(int i=1;i<=7;i++)
{
cout<<i*i<<" ";
}
cout<<endl;
}