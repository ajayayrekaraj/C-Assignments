//7. Write a program to print the first 10 even natural numbers in reverse order

#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	for(int i=n;i>=2;i--){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}

