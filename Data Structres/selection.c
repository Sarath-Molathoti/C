//SELECTION SORTING
#include<stdio.h>
#define MAX 1000
int main(){
	int a[MAX],n,i,j,temp;
	printf("Enter Array Size : ");
	scanf("%d",&n);
	printf("Enter Array Elements : ");
	for(i=0;i<n;++i)
	   scanf("%d",&a[i]);
	for(i=0;i<(n-1);++i){
	   for(j=i+1;j<n;++j){
	      if(a[i]>a[j]){
	        temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	      }
           }
	}
	printf("Array Elements After Sorting : ");
	for(i=0;i<n;++i)
	   printf("%d ",a[i]);
	printf("\n");
	return 0;
}
