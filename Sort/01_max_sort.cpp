#include "stdafx.h"
#include "stdio.h"

void swap(int* px, int* py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}

int index_of_max(int a[], int n) {
	int i, i_max = 0;
	for (i = 1; i < n; i++) {
		if (a[i] > a[i_max]) {
			i_max = i;
		}
	}
	return i_max;
}

void max_sort(int a[], int n) {
	int length;
	for (length = n; length > 1; length--) {
		int i_max = index_of_max(a, length);
		swap(&a[length - 1], &a[i_max]);
	}
}

void main()
{	
	int arr1[10] = { 3, 6, 1, 8, 9, 0, 5, 3, 5, 2 };
	max_sort(arr1, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr1[i]);
	}
}

