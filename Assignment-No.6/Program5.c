//5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
void main(){
	int n,sum=0;

	printf("Enter  a number:");
	scanf("%d",&n);

	for(int i=0;i<=n;i++){
		sum=sum+(i*i*i);
	}
	printf("sum is %d\n",sum);
}
