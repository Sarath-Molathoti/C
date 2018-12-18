#include<stdio.h>
int main(){
	int n,d,i,result = 1;
	printf("Enter a number to find factorial : ");
	scanf("%d",&n);
	while(n){
	   result = result * n;
	   n = n - 1;
	}
	printf("Factorial of a number is %d",result);
	return 0;
}
	    
	
