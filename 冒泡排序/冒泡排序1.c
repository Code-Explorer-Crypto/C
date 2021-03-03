void Bubble(int* a, int n) {
	int k = 0;
	for (int i = 0;i < n - 1;i++) {
		for (int j = 0;j < i;j++) {
			if (a[j] < a[j + 1]) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
}