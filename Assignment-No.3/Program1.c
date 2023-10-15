//1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0){
		printf("Positive Number");
	}
	else{
		printf("Non-Positive Number");
	}
	printf("\n");
}


