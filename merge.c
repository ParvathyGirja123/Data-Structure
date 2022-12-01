#include<stdio.h>
void main()
{
 int a1[100],a2[50],a3[200],m,n,i,j,k;
 printf("Enter the size of first array:\n");
 scanf("%d",&m);
 printf("Enter the size of second array:\n");
 scanf("%d",&n);
 printf("Enter the first array elements:\n");
 for(i=0;i<m;i++)
 {
  scanf("%d",&a1[i]);
 }
 printf("Enter the elements in second array:\n");
 for(j=0;j<n;j++)
 {
  scanf("%d",&a2[j]);
 }
 i=0;
 j=0;
 while(i<m && j<n)
 {
  if(a1[i]<a2[j])
  {
   a3[k]=a1[i];
   i++;
  }
  else
  {
   a3[k]=a2[j];
   j++;
  }
  k++;
 }
 if(i>=m)
 {
  while(j<n)
  {
   a3[k]=a2[j];
   j++;
   k++;
  }
 }
 if(j>=n)
 {
  while(i<m)
  {
   a3[k]=a1[i];
   i++;
   k++;
  }
 }
 printf("After merging:\n");
 for(i=0;i<m+n;i++)
 {
  printf("\n%d",a3[i]);
 }
}
  
