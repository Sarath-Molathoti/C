#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	max = a > b ? (a > c ? a : (c > b ? c : b)) : (b > c ? b : c );
	printf("Largest among %d,%d and %d is %d\n",a,b,c,max);
	return 0;
}
