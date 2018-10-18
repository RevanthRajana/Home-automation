#include<reg52.h>
sbit p=P1^0;
sbit q=P1^3;
sbit r=P0^0;
sbit s=P0^2;
sbit t=P0^4;
sbit u=P0^6;
void delay(int a)
{
unsigned int i,j;
for(i=0;i<a;i++)
for(j=0;j<1275;j++);
}
void main()
{
int array[]={0x02,0x9E,0X24,0X0C,0X98,0X48,0X40,0X1E,0X00,0X08};
int m,n,o;
while(1)
{
n=0;
while(n<100)
{
m=n/10;
o=n%10;
P2=array[m];
P3=array[o];
delay(50);
if(p==0&&q==1)
{
n++;
}
else if (p==1&&q==0)
{
if(n>0)
{
n--;
}}
else
{
n=n;
}
if(n==0)
{
r=0;
s=0;
t=0;
u=0;
}
else if(n>0&&n<=10)
{
r=1;
s=0;
t=0;
u=0;
}
else if(n>10&&n<=20)
{
r=1;
s=1;
t=0;
u=0;
}
else if(n>20&&n<=30)
{
r=1;
s=1;
t=1;
u=0;
}
else if(n>30&&n<=50)
{
r=1;
s=1;
t=1;
u=1;
}}}}