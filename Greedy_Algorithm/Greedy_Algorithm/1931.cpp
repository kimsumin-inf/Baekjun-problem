#include <iostream>
#include <time.h>

using namespace std;

int main() {
	time_t start, finish;

	double duration;
	int arr[10240][10240] = {};
	int cnt = 0;


	start = time(NULL);
	int sum = 0;
	cout << sum;
	
	finish = time(NULL);

	duration = (double)(finish - start);
	cout << duration << "ÃÊ" << endl;
}