#include<stdio.h>
int main(){
	int r1,r2,i,j,n,count = 0;
	printf("Enter first number : ");
	scanf("%d",&r1);
	printf("Enter second number : ");
	scanf("%d",&r2);
	printf("Prime numbers between %d and %d are : \n",r1,r2);
	for(i = r1;i < r2;++i){
	   for(j = 2;j < i;++j){
	      if(i % j == 0)
	         ++count;
	   }
	   if(count == 0)
             printf("%d\n",i);
           count = 0;
	}
	return 0;
}
	
