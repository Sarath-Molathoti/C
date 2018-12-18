#include<stdio.h>
int main(){
	int i,n,count = 0;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i = 2;i < n;++i){
	   if(n % i == 0)
	     ++count;
	}
	if(count == 0)
          printf("%d is a prime number\n",i);
        else
	  printf("%d is not a prime number\n",i);
	return 0;
}
	
