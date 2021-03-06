/*GCD of two integers is the largest integer that can exactly divide both numbers*/
#include "stdafx.h"
int gcd(int m, int n) {
	if (n == 0) return m;
	return gcd(n, m%n);
}

void main()
{
	int n = 2 * 3 * 4 * 5 * 7;
	int m = 2 * 4 * 11 * 17;
	printf("gcd(%d,%d)=%d\n", m, n, gcd(m, n));
}

