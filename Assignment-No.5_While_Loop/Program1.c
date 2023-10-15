//1. Write a program to print MySirG N times on the screen.

#include<stdio.h>
void main(){
	int i=1;
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n){
		printf("MySirG\n");
		i++;
	}
}

