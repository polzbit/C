int solution(int A[], int N) {
	int count = 0;
	for (int i = 0; i < N; i++) {
		int flag = 0;
		for (int j = 0; j < i; j++) {
			if (A[i] == A[j]) {
				flag = 1;
				break;
			}
		}
		if (flag==0)
			count++;
	}
	return count;
}
void main() {
	int a[] = { 2,1,1,2,3,1 };
	int ans = solution(a, 6);
	printf("The Answer is: %d\n", ans);
}