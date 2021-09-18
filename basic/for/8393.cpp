#include "myheader.h"
using namespace std;

int n, d[110];

int f() {
	int max = d[0];
	int max_index=1;
	for (int i = 0; i < n; i++) {
		if (max < d[i]) {
			max = d[i];
			max_index = i+1;
		}
	}
	return max_index;
}

int main() {
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &d[i]);
		
	}
	printf("%d", f());
}