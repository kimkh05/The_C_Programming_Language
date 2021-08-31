#include<iostream>
#include<typeinfo>
void TestFunc(int a) {
	std::cout << "TestFunc(int)" << std::endl;
}
void TestFunc(int a, int b = 10){
	std::cout << "TestFunc(int, int)" << std::endl;
}
int main(){
	TestFunc(5);//오류가 있는 것이 정 
	return 0;
}상 
