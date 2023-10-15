/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
   convert it into USD. */
#include<stdio.h>
void main(){
	float INR,USD;
	float  USD_Exchange=76.23;
	printf("Enter amount in INR:");
        scanf("%f",&INR);
	USD=INR/USD_Exchange;
	printf("Converted USD is: %.2f",USD);
	printf("\n");

}
