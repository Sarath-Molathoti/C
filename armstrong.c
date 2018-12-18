#include<stdio.h>
int main(){
	int i,n,d,j,e = 1,len = 0,sum = 0;
	printf("Enter number : ");
	scanf("%d",&n);
	for(i = n;i > 0;i = i / 10){
	   ++len;
	}
	for(i = n;i > 0;i = i / 10){
	   d = i % 10;
	   for(j = 0;j < len;++j)
	      e = e * d;
	   sum = sum + e;
	   e = 1;
	}
	if(sum == n)
          printf("%d is a armstrong number\n",n);
        else
	  printf("%d is not a armstrong number\n",n);
	return 0;
}
	
