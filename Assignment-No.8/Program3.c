/*3.    * * * * *
        * * * *
	* * *
	* *
	*           */

#include<stdio.h>
void main(){
	int i,j,n;
	printf("Enter no of rows:");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i<=j)
				printf("* ");
		}
		printf("\n");
	}
}
