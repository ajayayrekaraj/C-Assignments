/* 13. Write a program to take a three-digit number from the user and rotate its digits by
 * one position towards the right. */

#include <stdio.h>

int main() {
	int num, a, b, c, result;
	printf("Enter a three-digit number: ");
        scanf("%d", &num);
        a = num % 10;
        b = (num / 10) % 10;
        c = num / 100;
        result = a * 100 + b * 10 + c;
        printf("The rotated number is: %d\n", result);
        return 0;
}
