/* 10. Write a program to make the last digit of a number stored in a variable as zero.
 * (Example - if x=2345 then make it x=2340) */

#include<stdio.h>
void main(){
	int n,rem;
	printf("Enter a number:");
	scanf("%d",&n);
	rem=n/10;
	int ans=rem*10;
	printf("ans is %d",ans);
	printf("\n");

}
