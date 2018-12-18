#include<stdio.h>
int main(){
	int n,d,i,sum = 0;
	printf("Enter a number to reverse : ");
	scanf("%d",&n);
	for(i = n;i > 0;){
	   d = i % 10;
	   i = i / 10;
	   sum = sum * 10 + d;
	}
	printf("Number after reversing is %d",sum);
	return 0;
}
	    
	
