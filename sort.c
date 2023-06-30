#include <stdio.h>    
int main()    
{    
int a[10],n,i,j,temp; 
printf("Enter the size of array:"); 
scanf("%d",&n);
printf("Enter the array elements:");    
for (i=0;i<n;i++) 
{      
scanf("%d",&a[i]);    
}         
for (i=0;i<n;i++) 
{ 
  for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1]) 
{
  temp=a[j];
  a[j]=a[j+1];
  a[j+1]=temp;
}
}
}
printf("\nArray after sorting is:\n");
for(i=0;i<n;i++) 
{
  printf("%d\n",a[i]);
}
printf("\n");       
return 0;    
}    
