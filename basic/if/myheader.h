#pragma once
#include <iostream>
#include <string>

#define MAX_HOUR 24
#define MAX_MIN 60


void limit(int &num ,int min, int max) {
	if (num < min) {
		
		std::cout << "입력하신 숫자가  제한 숫자보다 더 작습니다." << std::endl;
		std::cin >> num;
	}
	else if (num > max) {
		std::cout <<"입력하신 숫자가 제한 숫자보다 더 큽니다." << std::endl;
		std::cin >> num;
	}
} 

void compare(int num1, int num2) {
	if (num1 > num2) {
		std::cout << '>' << std::endl;

	}
	else if (num1 < num2) {
		std::cout << '<' << std::endl;
	}
	else
		std::cout << "==" << std::endl;

}

void grade(int score) {
	if (score <= 100 && score >= 90) {
		std::cout << 'A' << std::endl;
	}
	else if (score >= 80) {
		std::cout << 'B' << std::endl;
	}
	else if (score >= 70) {
		std::cout << 'C' << std::endl;
	}
	else if (score >= 60) {
		std::cout << 'D' << std::endl;
	}
	else 
		std::cout << 'F' << std::endl;

}

void leap_year(int year) {
	if (year % 4 == 0 && (year % 100 != 0 ||year%400 == 0)) {
		std::cout << 1 << std::endl;
	}
	else
		std::cout << 0 << std::endl;
}

void quadrant(int x, int y) {
	if (x > 0 && y > 0) {
		std::cout << 1 << std::endl;
	}
	else if (x > 0 && y < 0) {
		std::cout << 4 << std::endl;
	}
	else if (x < 0 && y>0) {
		std::cout << 2 << std::endl;
	}
	else if (x < 0 && y < 0) {
		std::cout << 3 << std::endl;
	}
	else return;
}

void alert_clock(int hour, int min) {
	min -= 45;
	if (min  < 0) {
		min = MAX_MIN + min;
		hour--;
		if (hour < 0) {
			hour = 23;
		}
	}
	std::cout << hour << ' ' <<min <<std::endl;
}