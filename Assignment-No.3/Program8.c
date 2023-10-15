/* 8. Write a program to check whether a given year is a leap year or not. */

#include<stdio.h>
void main(){
	int year;
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%4==0){
		printf("Leap Year");
	}
	else{
		printf("Not a Leap Year");
	}
	printf("\n");
}

