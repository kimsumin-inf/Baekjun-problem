#include "myheader.h"
using namespace std;

int main() {
	int year;
	cin >> year;
	limit(year, 0, 4001);
	leap_year(year);
}