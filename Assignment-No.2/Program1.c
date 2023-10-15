//1. Write a program to print unit digit of a given number

#include<stdio.h>
void main(){
	int ans,rem;
	printf("Enter a number:");
	scanf("%d",&ans);
	ans=ans%10;

	printf("%d",ans);
}
