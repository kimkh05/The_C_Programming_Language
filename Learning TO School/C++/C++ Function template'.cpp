#include<iostream>
#include<typeinfo>
template<typename T>
T testfunc(T a) {
	std::cout << "매개변수 a : " << a
		<< ", type : " << typeid(a).name() << std::endl;
	return a;
}
int main() {
	std::cout << "int \t" << testfunc(3) << std::endl;
	std::cout << "double \t" << testfunc(3.3) << std::endl;
	std::cout << "char \t" << testfunc('A') << std::endl;
	std::cout << "char* \t" << testfunc("TestString") << std::endl;
}
