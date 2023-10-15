/* 9. Write a program to find the greatest among three given numbers. Print number once
  if the greatest number appears two or three times. */

#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("Enter three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1>num2){
		printf("num1 is greater");
	}
	else if(num2>num3){
		printf("num2 is greater");
	}
	else if(num3>num1){
		printf("num3 is greater");
	}
	printf("\n");
}

