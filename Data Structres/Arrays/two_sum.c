#include<stdio.h>
int search(int a[],int i,int j,int n)
{
	int p;
	while((i<n)&&(a[i]!=j))
	      ++i;
	if(i>=n)
	   return -1;
	else
	   return i;
}
void main()
{
	int a[100];
	int i,j,key,n,r;
	printf("Enter array size:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	   {
	     scanf("%d",&a[i]);
	   }
	printf("Please enter key value:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	   {
	     j=key-a[i];
	     r=search(a,i,j,n);
             if(r>0)
               {
		printf("The sum of %d and %d is %d\n",a[i],a[r],key);
	       }
	     else
	       {
		continue;
	       }
	   }
}
	
