#include<stdio.h>
#define MAX 1000
int main(){
	int n,i,a[MAX];
	printf("Enter n : ");
	scanf("%d",&n);
	a[0] = 0;a[1] = 1;
	for(i = 2;i < n;++i)
	   a[i] = a[i - 1] + a[i - 2]; 
	printf("First %d fibonacci numbers : \n",n);
	for(i = 0;i < n;++i)
           printf("%d\n",a[i]);
	return 0;
}
	
