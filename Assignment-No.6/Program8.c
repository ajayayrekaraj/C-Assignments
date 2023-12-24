//8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
void main(){
	int n,count;

	printf("Enter a number:");
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		if(n%i==0)
			count++;
	}
	if(count==2)
		printf("%d is Prime Number\n",n);
	else
		printf("%d is not a prime number\n",n);

}

	

