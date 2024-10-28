#include <stdio.h>

void main()

{
  int a[50],i,size,s,left,right,middle;
printf("Enter size of the array\n");
  scanf("%d", &size);
 printf("\n Enter the array elements:\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
  }
  printf("The array elements are:\n");
  for(i=0;i<size;i++)
 {
 printf("%d\t",a[i]);
 }
 printf("\nEnter the number to be search:\n");
 scanf("\n %d",&s);
 left=0;
 right=size-1;
 while(left<=right)
 {
 middle=(left + right)/2;
 if(a[middle]==s)
 {
 printf("The element is found at position %d\n",middle);
 break;
 }
 else if(a[middle]>s)
 right=middle-1;
 else
 left=middle+1;
 }
 if(left>right)
 printf("elements not found in the list\n");
 }
 
 
