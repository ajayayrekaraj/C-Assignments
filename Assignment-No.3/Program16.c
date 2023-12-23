/*16. Write a program to check whether a given character is an alphabet (uppercase), an
  alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
void main(){
	char ch;
	printf("Enter a Character:");
	scanf("%c",&ch);

	if(ch>='a' && ch<='z')
		printf("Lowercase\n");
	else if(ch>='A' && ch<='Z')
		printf("UpperCase\n");
	else if(ch>='0' && ch<='9')
		printf("Digit\n");
	else
		printf("Special Character\n");
}

