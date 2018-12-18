#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Elements before swapping: ");
	printf("a = %d, b = %d\n",a,b);
	temp = a;
	a = b;
	b = temp;
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	printf("Elements after swapping: ");
	printf("a = %d, b = %d\n",a,b);
}
	
