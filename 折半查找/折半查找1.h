#pragma once
//a�����С��������,���鳤��n,Ҫ������m
int BinarySearch(int* a, int n, int m) {
	int init = a[0];
	int end = a[n - 1];
	while (end != init) {
		if (a[(end - init) / 2] > m) {
			end = a[(end - init) / 2 - 1];
		}
		else if (a[(end - init) / 2] < m) {
			init = a[(end - init) / 2 + 1];
		}
		else if (a[(end - init) / 2] == m) {
			return (end - init) / 2;
		}
	}
	return 0;
 }
