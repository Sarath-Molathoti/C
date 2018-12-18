#include<stdio.h>
int main(){
	int n1,n2,min;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	min = n1 > n2 ? n2 : n1; 
	while((n1 % min != 0) || (n2 % min != 0))
	  --min;
	printf("HCF of %d and %d is %d\n",n1,n2,min);
	return 0;
}
	    
	
