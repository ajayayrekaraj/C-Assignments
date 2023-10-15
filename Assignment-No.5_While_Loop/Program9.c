//9. Write a program to print cubes of the first N natural numbers.

#include<stdio.h>
void main(){
	int i=1,n;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i*i*i);
		i++;
	}
}


