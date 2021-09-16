#include "myheader.h"
using namespace std;

int main() {
	int num1, num2;
	cin >> num1;
	limit(num1, -10000, 10000);
	cin >> num2;
	limit(num2, -10000, 10000);

	compare(num1, num2);
}