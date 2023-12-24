//2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
void main(){
	int n;
	int sum=0;

	printf("Enter a number:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("sum is %d\n",sum);
}

