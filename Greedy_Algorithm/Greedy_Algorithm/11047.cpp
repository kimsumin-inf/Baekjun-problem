#include <iostream>
using namespace std;

int main() {
	int kinds = 0, value = 0,count =0;
	cin >> kinds >> value;
	int* arr = new int[kinds];
	for (int i = 0; i < kinds; i++) {
		cin >> arr[i];
	}
	for (int i = kinds-1; i >=0; i--) {
		if (value / arr[i] == 0) {
			continue;
		}
		count += value / arr[i];
		value %= arr[i];
		//cout << "value :" << value << endl;
		if (value == 0)
			break;
		

	}
	cout << count << endl;




	delete[]arr;

}