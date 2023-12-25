/* 3. Write a program which takes the day number of a week and displays a
 * unique greeting message for the day  */
#include<stdio.h>
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);

	switch(n){
		case 1:
			printf("Good day Monday");
			break;
		case 2:
			printf("bad day Tuesday");
			break;
		case 3:
			printf("Dry day Wednesday");
			break;
		case 4:
			printf("God day Thrusday");
			break;
		case 5:
			printf("Meat day Friday");
			break;
		case 6:
			printf("Hanuman Day Saturday");
			break;
		case 7:
			printf("Sleep Day Sunday");
			break;
		default:
			printf("Invalid Selection");
	}
}

