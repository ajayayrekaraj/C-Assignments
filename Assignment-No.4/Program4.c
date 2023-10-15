//4. Write a program to print the first 10 odd natural numbers

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		printf("%d",i);
		printf("\n");
		i++;
	} 
	printf("\n");
}
