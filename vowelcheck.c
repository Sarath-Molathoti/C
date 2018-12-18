#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character to check if it is a vowel or not : ");
	scanf("%c",&ch);
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	  printf("%c is a vowel",ch);
	else
	  printf("%c is not a vowel",ch);
	return 0;
}
