//8. Write a program to print squares of the first 10 natural numbers.

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			printf("%d",i*i);
			printf("\n");
		}
}

