#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double *memory;
	int n, i;
	printf("Enter number of memory cells: \n");
	scanf_s("%d",&n);

	memory = (double *)malloc(sizeof(double));
	if (memory == NULL) {
		return 1;
	}
	for (i = 0; i < n; i++) {
		printf("Enter Value for first memory cell: \n");
		scanf_s("%lf", memory + i);
	}
	free(memory);
	return 0;
}

