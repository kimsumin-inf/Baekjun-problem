#include "myheader.h"
using namespace std;

int main() {
	int x, y;
	cin >> x;
	limit(x, -1000, 1000);
	cin >> y;
	limit(y, -1000, 1000);
	quadrant(x, y);
}