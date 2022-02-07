#include<stdio.h>
#inclde<conio.h>
int main()
{
int arr1[50],arr2[50],size1,size2,i,k,merge[100];
clrsr();
printf("enter the size of first array:");
scanf("%d",&size1);
printf("enter %d elements",size1);
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("enter the size of second array");
scanf("%d",&size2);
printf("enter %d elements",size2);
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("the new array after merging is ");
for(i=0;i<k;i++)
{
printf("%d",merge[i]);
getch();
return 0;
}