/*10. WAP to take date as an input in below given format and convert the date format and
 * display the result as given below.
 * User Input date format – “DD/MM/YYYY” (27/11/2022)
 * Output format –
 * “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022) */

#include<stdio.h>
void main(){
	int DD,MM,YYYY;
	printf("Enter Date/Month/Year:");
	scanf("%d/%d/%d",&DD,&MM,&YYYY);
	printf("Day -%d,Month-%d,Year-%d\n",DD,MM,YYYY);
}
