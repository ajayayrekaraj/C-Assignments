//4.Write a program to print the first N odd natural numbers.

#include<stdio.h>
void main(){
	int i=0,n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==1){
			printf("%d\n",i);
		}
		i++;
	}
}

