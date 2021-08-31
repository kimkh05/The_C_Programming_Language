#include<iostream>
#include<typeinfo>
int add(int a, int b, int c) { // 2021.08.31
	std::cout << "add(int, int, int): ";
	return a + b + c;
}
int add(int a, int b) {
	std::cout << "add(int, int): ";
	return a + b;
}
double add(double a, double b) {
	std::cout << "add(double, double): ";
	return a + b;
}
int main() {
	std::cout << add(3, 4)<< std::endl;
	std::cout << add(3, 4, 5) << std::endl;
	std::cout << add(3.3, 4.4) << std::endl;
	return 0;
}
