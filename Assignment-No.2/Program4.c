//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main(){
	int n,sum=0,rem;
	printf("Enter three digit number:");
	scanf("%d",&n);
	while(n!=0){
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	}
	printf("sum is %d",sum);
	printf("\n");

}


	
