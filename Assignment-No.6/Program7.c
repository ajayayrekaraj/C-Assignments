//7. Write a program to count digits in a given number

#include<stdio.h>
void main(){
	int n,count=0;

	printf("Enter a number:");
	scanf("%d",&n);

	while(n!=0){
		int rem;
		rem=n%10;
		count++;
		n=n/10;
	}
	printf("count is %d\n",count);
}


