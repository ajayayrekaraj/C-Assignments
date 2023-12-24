//10. Write a program to reverse a given number

#include<stdio.h>
void main(){
	int n,rev;
	printf("Enter a number:");
	scanf("%d",&n);

	while(n!=0){
		int rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reverse is %d\n",rev);
}
