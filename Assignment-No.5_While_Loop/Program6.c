//6. Write a program to print the first N even natural numbers.

#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}
}

