/*3. Write a program to check whether a given number is an even number or an odd
   number.  */

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(n%2==0){
		printf("Even Number");
	}
	else{
		printf("Odd Number");
	}
	printf("\n");
}

