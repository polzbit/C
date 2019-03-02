﻿#include "stdafx.h"
#include "stdio.h"


void insertion_step(int a[], int k, int n) {
	int temp = a[k];
	int j = k + 1;
	while ((j < n) && (temp > a[j])) {
		a[j - 1] = a[j];
		j++;
	}
	a[j - 1] = temp;
}
void insertion_sort(int a[], int n) {
	int i;
	for (i = n; i >= 0; i--) {
		insertion_step(a,i,n);
	}
}

void main()
{
	int arr1[10] = { 3, 6, 1, 8, 9, 0, 5, 3, 5, 2 };
	insertion_sort(arr1, 10);
}
