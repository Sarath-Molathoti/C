//linear searching
//author=Sarath Molathoti && date=24/07/2018
#include<stdio.h>
#define MAX 1000
void main(){
	int a[MAX],n,i,key;
	printf("Enter size of an array : ");
	scanf("%d",&n);
	printf("Enter the element to search : ");
	scanf("%d",&key);
	printf("Enter array elements :\n");
	for(i=0;i<n;++i){
	   scanf("%d",&a[i]);
	}
	i=0;
	while((i<=n)&&(a[i]!=key)){
	     ++i;
	     }
	if(i>n){
	  printf("Element not found");
	}
	else{
	  printf("Element found at index number %d \n",i);
	}
}
