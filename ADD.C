#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b,c;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&a,&b);

printf("sum is %d",add(a,b));
getch();
}
int add(int x,int y)
{
return (x+y);
}