/*8. Write a program to check whether the given number is even or odd using a bitwise
  operator. */

#include<stdio.h>
void main(){
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=n&1;
	if(result==1){
		printf("Odd");
	}
	else{
		printf("Even");
	}
	printf("\n");

}
