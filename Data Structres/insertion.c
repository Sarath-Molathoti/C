//INSERTION SORTING
#include<stdio.h>
#define MAX 1000
int main(){
	int a[MAX],n,i,j,key;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter Array Elements : ");
	for(i=0;i<n;++i)
	   scanf("%d",&a[i]);
	for(j=1;j<n;++j){
	   key=a[j];
	   i=j-1;
	   while(i>=0 && a[i]>key){
	     a[i+1]=a[i];
	     --i;
	   }
	   a[i+1]=key;
	}
	printf("Array Elements After Sorting : ");
	for(i=0;i<n;++i)
	   printf("%d ",a[i]);
	printf("\n");
	return 0;
}
