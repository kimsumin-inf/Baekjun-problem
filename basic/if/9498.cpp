#include "myheader.h"
using namespace std;

int main() {
	int score;
	cin >> score;
	limit(score, 0, 100);
	grade(score);
}