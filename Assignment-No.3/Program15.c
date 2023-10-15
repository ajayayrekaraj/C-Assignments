//15. Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==0){
		printf("Zero");
	}
	else if(n>0){
		printf("%d is Positive",n);
	}
	else {
		printf("%d is Negative",n);
	}
	printf("\n");
}

