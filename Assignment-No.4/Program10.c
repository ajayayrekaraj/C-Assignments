//10 .Write a program to print a table of 5.

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d",i*n);
		printf("\n");
	}
}
