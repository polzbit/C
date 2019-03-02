// var_swap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"

void swap(int* px, int *py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}

void main()
{
	int x = 5;
	int y = 7;

	printf("X number is: %d\n", x);
	printf("Y number is: %d\n", y);
	swap(&x, &y);
	printf("-----SWAP--------\n");
	printf("X number is: %d\n", x);
	printf("Y number is: %d\n", y);
}