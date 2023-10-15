//10.Write a program to print a table of N.

#include<stdio.h>
void main(){
	int n;
	printf("Enter number of table:");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
}

