#pragma warning(disable:4996)
#include <iostream>
#include <typeinfo>
int main(){
	auto nData = 10;          // nData ������ int
	std::cout << "nData : " << nData << ", "
		<< typeid(nData).name() << std::endl;
	auto strName = "Tom";     // strName ������ const char* //�ٲܼ� ���� ��� ���ڿ�
	std::cout << "strName : " << strName << ", "
		<< typeid(strName).name() << std::endl;
	auto ch = 'A';             // ch ������ char
	std::cout << "ch : " << ch << ", "
		<< typeid(ch).name() << std::endl;
	return 0;
}
