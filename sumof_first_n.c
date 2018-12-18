#include<stdio.h>
int main(){
	int n;
	printf("Enter n to find sum of first n natural numbers : ");
	scanf("%d",&n);
	printf("sum of first %d natural numbers is %d\n",n,(n*(n+1)/2));
	return 0;
}
