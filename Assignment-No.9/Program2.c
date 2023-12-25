/* 2. Write a menu driven program with the following options:
 * a. Addition
 * b. Subtraction
 * c. Multiplication
 * d. Division
 * e. Exit    */

#include<stdio.h>
int main(){
	int x,a,b;
	while(1){
	printf("1.Addition\n");
	printf("2.Substraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Exit\n");

	printf("Enter your choice:");
	scanf("%d",&x);

	switch(x){
		case 1:
			printf("Enter two numbers:");
			scanf("%d %d",&a,&b);
			printf("Addition is %d\n",a+b);
			break;
		case 2:
			printf("Enter two numbers:");                                                                                                                                 scanf("%d %d",&a,&b);                                                                                                                 
			printf("Substraction is %d\n",a-b);
			break;
		case 3:
			printf("Enter two numbers:");                                                                                                                                 scanf("%d %d",&a,&b);                                                                                                                 
			printf("Multiplication is %d\n",a*b);
			break;
		case 4:
			printf("Enter two numbers:");                                                                                                                                 scanf("%d %d",&a,&b);                                                                                                                 
			printf("Division is %d\n",a/b);
			break;
		case 5:
			printf("Exit\n");
			break;
		default:
			printf("Invalid\n");
	}
	return 0;
	}
}

