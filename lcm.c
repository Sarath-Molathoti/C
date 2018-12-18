#include<stdio.h>
int main(){
	int n1,n2,min;
	printf("Enter first number : ");
	scanf("%d",&n1);
	printf("Enter second number : ");
	scanf("%d",&n2);
	min = n1 > n2 ? n2 : n1; 
	while((min % n1 != 0) || (min % n2 != 0))
	  ++min;
	printf("LCM of %d and %d is %d\n",n1,n2,min);
	return 0;
}
	    
	
