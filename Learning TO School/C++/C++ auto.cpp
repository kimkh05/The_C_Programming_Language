#pragma warning(disable:4996)
#include <iostream>
#include <typeinfo>
int main(){
	auto nData = 10;          // nData 형식은 int
	std::cout << "nData : " << nData << ", "
		<< typeid(nData).name() << std::endl;
	auto strName = "Tom";     // strName 형식은 const char* //바꿀수 없는 상속 문자열
	std::cout << "strName : " << strName << ", "
		<< typeid(strName).name() << std::endl;
	auto ch = 'A';             // ch 형식은 char
	std::cout << "ch : " << ch << ", "
		<< typeid(ch).name() << std::endl;
	return 0;
}
