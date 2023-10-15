//3. Write a program to print the first 10 natural numbers in reverse order

#include<stdio.h>
void main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=n;i>0;i--){
		printf("%d",i);
		printf("\n");
	}
}

