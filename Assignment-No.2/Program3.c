//3. Write a program to swap values of two int variables.

#include<stdio.h>
int main(){
	int a,b;
	printf("Enter values of a and b before swapping: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("values after swapping of a and b is %d  %d :",a,b);
}

