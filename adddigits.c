#include<stdio.h>
int main(){
	int n,d,i,sum = 0;
	printf("Enter a number to add digits of a number : ");
	scanf("%d",&n);
	for(i = n;i > 0;){
	   d = i % 10;
	   i = i / 10;
	   sum = sum + d;
	}
	printf("Sum of digits of a %d is %d",n,sum);
	return 0;
}
	    
	
