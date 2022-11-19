#include <iostream>
using namespace std;

//Arithematic Function//
void arith()
{
double num1, num2;
char op;
cout<<"Enter first number :";
cin>>num1;
cout<<"Enter the operator :";
cin>>op;
cout<<"Enter the second number :";
cin>>num2;
cout<<"The result is :\n";
if(op=='+')
{
cout<<num1+num2;
}
else if(op=='-')
{
cout<<num1-num2;
}
else if(op=='*')
{
cout<<num1*num2;
}
else if(op=='/')
{
cout<<num1/num2;
}
else
{
cout<<"Invalid Operator!!!";
}
}

//Sin Function//
float sin(float x)
{
int i=2;
float deno=1,num,term,sum;
num=x;
sum=x;
do
{
num=num*x*x;
deno=-deno*i*(i+1);
term=num/deno;
sum=sum+term;
i=i+2;
cout<<num<<" "<<deno<<" "<<term<<endl;
}
while(term<-0.001 || term>0.001);
return sum;
}

//Cosine Function//
double cos(double x)
{
    double num=1,sum=1,term;
    int i=1,den=1;
    do
    {
        num=num*x*x;
        den=-den*i*(i+1);
        term=num/den;
        sum=sum+term;
        i=i+2;
    }
    while(term<-0.001 || term>0.001);
    return sum;
}

//Trignometric Function//
void trig()
{
int op,ty,l,v;
float x;
cout<<"Which function do you want to calculate?";
cout<<"\n1: sin\n2: cos\n3: tan\n4: cot\n5: sec";
cout<<"\n6: cosec\n";
cin>>op;
cout<<"What are you going to use?\n";
cout<<"1: Radian\n2 :Degree\n";
cin>>ty;
cout<<"Enter the value :";
cin >>x;
if(ty==2)
{
if(x>=360)
{
v=x/360;
x=x-(v*360);
}
x=(x*3.1416)/180;
}
else if(ty==1)
{
if(x>=6.283)
l=x/6.283;
x=x-(l*6.283);
}
else 
{
    cout<<"Entered invalid number!!";
}
if(op==1)
{
cout<<"The result is :\n" <<sin(x);
}
else if(op==2)
{
cout<<"The result is :\n" <<cos(x);
}
else if(op==3)
{
cout<<"The result is :\n" <<sin(x)/cos(x);
}
else if(op==4)
{
cout<<"The result is :\n" <<cos(x)/sin(x);
}
else if(op==5)
{
cout<<"The result is :\n" <<1/cos(x);
}
else if(op==6)
{
cout<<"The result is :\n" <<1/sin(x);
}
}

//Exponential function//
void exp()
{
double b,re=1;
int i;
cout<<"Enter the base :";
cin>>b;
cout<<"Enter the Exponent(A natural number) :";
cin>>i;
for(i;i>0;i--)
{
re=re*b;
}
cout<<"The result is :"<<re;
}

//Main Function//
int main()
{
int ch;
char ask;
cout<<"This program is written by Hitesh Maurya.\n";
do
{
cout<<"Which type of operation you are going to do?";
cout<<"\n1: Arithematic\n2: Trignometric";
cout<<"\n3: Exponential\n";
cin>>ch;
if(ch==1)
{
arith();
}
else if(ch==2)
{
trig();
}
else if(ch==3)
{
exp();
}
else
{
cout<<"Invalid Number Entered!!";
}
cout<<"\nDo you want to run this code again?(y/n) :";
cin>>ask;
}
while(ask=='y');
cout<<"Thank You!!!!";
return 0;
}

