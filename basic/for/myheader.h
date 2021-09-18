#pragma once
#include <iostream>
#include <string>
#include <cstdio>


void limit(int& num, int min, int max) {
	if (num < min) {

		std::cout << "입력하신 숫자가  제한 숫자보다 더 작습니다." << std::endl;
		std::cin >> num;
	}
	else if (num > max) {
		std::cout << "입력하신 숫자가 제한 숫자보다 더 큽니다." << std::endl;
		std::cin >> num;
	}
}


void multiplication_table(int num) {
	for (int i = 1; i <= 9; i++) {
		std::cout << num << " * " << i << " = " << num * i << std::endl;
	}
}

void calculate(int num1, int num2) {
	std::cout << num1 + num2 << std::endl;
}

void linear_add(int num) {
	int sum = 0;
	for (int i = num ; i >= 1; i--)
		sum += i;

	std::cout << sum << std::endl;
}