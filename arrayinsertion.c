#include<stdio.h>
int main()
{
 int a[10],i,n,in,pos;
 printf("Enter the limit:\n");
 scanf("%d",&n);
 printf("Enter the Elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the element to be inserted:\n");
 scanf("%d",&in);
 printf("Enter the position of the new element:\n");
 scanf("%d",&pos);
 for(i=n;i>=pos;i--)
 {
 a[i]=a[i-1];
 }
 a[pos-1]=in;
 for(i=0;i<n+1;i++)
 printf("%d\n",a[i]);
 } 
