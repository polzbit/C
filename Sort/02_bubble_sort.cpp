#include "stdafx.h"
#include "stdio.h"

void swap(int* px, int* py) {
	int temp = *px;
	*px = *py;
	*py = temp;
}

int bubble(int a[], int n) {
	int i, swapped = 0;
	for (i = 1; i < n; i++) {
		if (a[i-1] > a[i]) {
			swap(&a[i],&a[i-1]);
			swapped = 1;
		}
	}
	return swapped;
}

void bubble_sort(int a[], int n) {
	int not_sortted = 1;
	while ((n > 1) && not_sortted) {
		not_sortted = bubble(a, n--);
	}
}

void main()
{
	int arr1[10] = { 3, 6, 1, 8, 9, 0, 5, 3, 5, 2 };
	bubble_sort(arr1, 10);
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr1[i]);
	}
}

