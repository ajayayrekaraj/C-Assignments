//5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	for( int i=n;i>=1;i--){
		if(i%2==1){
		printf("%d",i);
		printf("\n");
		}
	}
}

