#include<iostream>
#include<typeinfo>
namespace Test {
	int g_nData = 100;
	void TestFunc() {
		std::cout << "TEST::TestFunc()" << std::endl;
	}
}
int main() {
	Test::TestFunc();
	std::cout << Test::g_nData << std::endl;
	return 0;
}
