#include<stdio.h>
void main()
{
 int a[10],i,n,pos;
 printf("Enter the limit:\n");
 scanf("%d",&n);
 printf("Enter the array elements:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Given Array is:\n");
 for(i=0;i<n;i++)
 {
  printf("%d \t",a[i]);
 }
 printf("\nEnter the position to be deleted:\n");
 scanf("%d",&pos);
 for(i=pos-1;i<n;i++)
 {
  a[i]=a[i+1];
 }
 printf("\n Converted array:\n");
 for(i=0;i<n-1;i++)
 {
  printf("%d ",a[i]);
 }
}
  

   
