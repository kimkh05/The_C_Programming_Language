#include<iostream>
int main() {
	int nAge;
	char szJob[32];
	std::string strName;
	std::cout << "���̸� �Է��ϼ��� : ";
	std::cin >> nAge;
	std::cout << "������ �Է��ϼ��� : ";
	std::cin >> szJob;
	std::cout << "�̸��� �Է��ϼ��� : ";
	std::cin >> strName;
	std::cout << "����� �̸��� " << strName << "�̰�, "
		<< "���̴� " << nAge << "���̸�, "
		<< "������ " << szJob << "�Դϴ�." << std::endl;
	return 0;
}
