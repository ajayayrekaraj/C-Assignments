//2. Write a program to print a given number without its last digit.

#include<stdio.h>
void main(){
	int ans;
	printf("Enter a number:");
	scanf("%d",&ans);
	int rem=ans/10;
	printf("%d",rem);
}

