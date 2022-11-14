#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"a refers to Amount\n";
cout<<"Enter a >> ";
cin>>a;
double c1,c2;
double note2000=0,note500=0,note200=0,note100=0,note50=0,note20=0,note10=0,note5=0;
if (a>=2000)
{
note2000=a/2000;
a=a-(note2000*2000);
cout<<"Note of Rs 2000    >> "<<note2000<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=500)
{
note500=a/500;
a=a-(note500*500);
cout<<"Note of Rs 500     >> "<<note500<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=200)
{
note200=a/200;
a=a-(note200*200);
cout<<"Note of Rs 200     >> "<<note200<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=100)
{
note100=a/100;
a=a-(note100*100);
cout<<"Note of Rs 100     >> "<<note100<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=50)
{
note50=a/50;
a=a-(note50*50);
cout<<"Note of Rs 50      >> "<<note50<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=20)
{
note20=a/20;
a=a-(note20*20);
cout<<"Note of Rs 20      >> "<<note20<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=10)
{
note10=a/10;
a=a-(note10*10);
cout<<"Note of Rs 10      >> "<<note10<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if  (a>=5)
{
note5=a/5;
a=a-(note5*5);
cout<<"Note of Rs 5       >> "<<note5<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if (a>=2)
{
c2=a/2;
a=a-(c2*2);
cout<<"Coin of Rs 2       >> "<<c2<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
if(a==1)
{
c1=a/1;
a=a-(c1*1);
cout<<"Coin of Rs 1       >> "<<c1<<endl;
cout<<"Remaining Amount   >> "<<a<<endl;
}
getch();
}