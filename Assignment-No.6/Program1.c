//1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int sum=0;

	for(int i=-0;i<=n;i++){
		sum=sum+i;
	}
	printf("sum is %d",sum);
}
