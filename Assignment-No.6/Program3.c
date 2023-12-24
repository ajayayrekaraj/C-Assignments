//3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
void main(){
	int n,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);

	for(int i=0;i<=n;i++){
		if(i%2==1)
			sum=sum+i;
	}
	printf("Sum is %d\n",sum);
}
