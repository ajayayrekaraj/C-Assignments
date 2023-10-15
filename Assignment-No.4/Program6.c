//6. Write a program to print the first 10 even natural numbers.

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i=i+2){
		printf("%d",i+1);
		printf("\n");
	}
}

