/* 11 .Write a program to input a number from the user and also input a digit. Append a
 * digit in the number and print the resulting number. (Example - number=234 and
 * digit=9 then the resulting number is 2349) */

#include<stdio.h>
void main(){
	int n,digit,rem,ans;
	printf("Enter number:");
	scanf("%d",&n);
	printf("Enter digit:");
	scanf("%d",&digit);
	rem=n/10;
	ans=n*10+digit;
	printf("ans is %d",ans);
	printf("\n");
}

