// 2. Write a program to print the first 10 natural numbers.

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d",i);
		printf("\n");
	}
	printf("\n");
}


