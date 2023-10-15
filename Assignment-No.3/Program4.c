/* 4. Write a program to check whether a given number is an even number or an odd
   number without using % operator. */

#include<stdio.h>
void main(){
	int n,result;
	printf("Enter Number:");
	scanf("%d",&n);
	result=n&1;
	if(result==1){
		printf("ODD");
	}
	else{
		printf("Even");
	}
	printf("\n");
}

