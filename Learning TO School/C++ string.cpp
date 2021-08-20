#include<iostream>
int main() {
	int nAge;
	char szJob[32];
	std::string strName;
	std::cout << "나이를 입력하세요 : ";
	std::cin >> nAge;
	std::cout << "직업을 입력하세요 : ";
	std::cin >> szJob;
	std::cout << "이름을 입력하세요 : ";
	std::cin >> strName;
	std::cout << "당신의 이름은 " << strName << "이고, "
		<< "나이는 " << nAge << "살이며, "
		<< "직업은 " << szJob << "입니다." << std::endl;
	return 0;
}
