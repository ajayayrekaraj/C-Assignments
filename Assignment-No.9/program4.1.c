/* 4. Write a menu driven program with the following options:
  a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
  b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
  c. Check whether a given set of three numbers are equilateral triangle or not
  d. Exit  */

#include<stdio.h>
void main(){
	int n;
	printf("1.isosceles triangle\n2.right angled triangle\n3.equilateral triangle\n4.Exit\nEnter choice:");
	scanf("%d",&n);

	int a,b,c;

	switch(n){
		case 1:
			printf("Enter value of a,b and c:");
			scanf("%d %d %d",&a,&b,&c);

			if(a==b||b==c||c==a){
				printf("It is an isosceles triangle");
			}
			else{
				printf("It in not isosceles triangle");
			}
			break;
		case 2:
			printf("Enter value of a,b and c:");
			scanf("%d %d %d",&a,&b,&c);

			if((a*a+b*b==c*c)&& (a*a+c*c==b*b)&&(b*b+c*c==a*a)){
				printf("Right Angled triangle");
			}
			else{
				printf("Not a right angled triangle");
			}break;

		case 3:
			printf("Enter value of a,b and c:");
			scanf("%d %d %d",&a,&b,&c);

			if(a==b && b==c){
				printf("equilateral triangle");
			}
			else{
				printf("Not a equilateral triangle");
			}
			break;
		case 4:
			printf("Exit");
			break;
		default:
			printf("Invalid");
			break;
	}
}
