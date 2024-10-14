#include <iostream>
using namespace std;
void ColorsSort(int* a, int n) {
	int red = 0, white = 0, blue = 0;
	for (int i = 0; i <= n; i++) {
		if (a[i] == 0) red++;
		if (a[i] == 1) white++;
		else blue++;
	}
	int index = 0;
	for (int i = 0; i < red; i++) a[index++] = 0;
	for (int i = 0; i < white; i++) a[index++] = 1;
	for (int i = 0; i < blue; i++) a[index++] = 2;
}
int main() {
	int a[] = { 0, 0, 2, 1, 0, 1, 1, 2, 1, 1 };
	int n = sizeof(a) / sizeof(a[0]);
	ColorsSort(a, n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;

}