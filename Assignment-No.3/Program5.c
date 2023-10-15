//5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>=100 && n<=999){
		printf("It is Three digit Number");
	}
	else{
		printf("Not a Three Digit Number");
	}
	printf("\n");
}

