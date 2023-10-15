//7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>
void main(){
	int n,result=0,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0){
		result=n&1;
		count++;
		if(result==1){
			printf("%d",count);
			break;
		}
		n=n>>1;
	}
	printf("\n");
}


