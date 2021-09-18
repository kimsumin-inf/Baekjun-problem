#include "myheader.h"
using namespace std;

int main() {
	int num1, num2;
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; i++) {
		cin >> num1;
		limit(num1, 0, 10);
		cin >> num2;
		limit(num2, 0, 10);
		calculate(num1, num2);
	}
}