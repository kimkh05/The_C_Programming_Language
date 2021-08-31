#include<iostream>
#include<typeinfo>
#define ADD(a, b) ( (a) + (b) ) // 매크로
int Add(int a, int b) { // 일반 함수 ( 내부적으로 오버헤드가 발생 ) 
	return a + b;
}
inline int AddNew(int a, int b) { // 인라인 함수 : 함수처럼 만들었지만 함수가 아니다.
	return a + b;
}
int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << "ADD() : " << ADD(a, b) << std::endl; // 함수호출이라 하지 않음.
	std::cout << "Add() : " << Add(a, b) << std::endl;
	std::cout << "AddNew() : " << AddNew(a, b) << std::endl;// 함수호출이라 하지 않음.
	return 0;
}
