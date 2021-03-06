#include "stdafx.h"
#include "stdbool.h"

bool exists(int a[], int n, int x) {
	if (n == 0) return false;
	int mid = n / 2;
	if (a[mid] == x) return true;
	if (a[mid] > x) return exists(a ,mid,x);
	return exists(a + mid + 1, n - mid - 1, x);
}

void main()
{
	int a[8] = { 1,2,3,4,5,6,7,8 };
	int x = 6;
	printf("Is the value %d in Array? ",x);
	printf("%d\n", exists(a, 8, x));
}

