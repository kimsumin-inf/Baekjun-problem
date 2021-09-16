#include "myheader.h"
using namespace std;

int main() {
	int hour, min;
	cin >> hour;
	limit(hour, -1, 24);
	cin >> min;
	limit(min, -1, 60);
	alert_clock(hour, min);
}