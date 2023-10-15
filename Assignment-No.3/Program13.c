/* 13. Write a program to check whether a given number is divisible by 3 and divisible by 2. */

#include<stdio.h>
void main(){
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if(n%3==0 && n%2==0){
		printf("Divisible by 3 and 2");
	}
	else{
		printf("Not Divisible by 3 and 2");
	}
	printf("\n");

}

