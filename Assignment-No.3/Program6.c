/* 6. Write a program to print greater between two numbers. Print one number of both are
   the same. */

#include<stdio.h>
void main(){
	int a,b;
	printf("Enter values of a and b:");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("a is greater");
	}
	else if(b>a){
		printf("b is greater");
	}
	else if(a==b){
		printf("both are same");
	}
	printf("\n");
}

