//6. Write a program to calculate factorial of a number

#include<stdio.h>
void main(){
	int n,i=1,fact=1;

	printf("Enter a number:");
	scanf("%d",&n);

	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial is %d\n",fact);
}

