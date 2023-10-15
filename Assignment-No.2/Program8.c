// 9. Write a program to print size of an int, a float, a char and a double type variable.

#include<stdio.h>
void main(){
	int a;
	float b;
	char c;
	double d;
	a=sizeof(int);
	printf("size is %d",a);
	printf("\n");
	b=sizeof(float);
	printf("size is %f",b);
	printf("\n");
	c=sizeof(char);
	printf("size is %d",c);
	printf("\n");
	d=sizeof(double);
	printf("size is %f",d);
	printf("\n");
}


