#include<iostream>
int main() {
	// bool ����
	bool b0 = 0 == 0; // b0 = 1[true]
	bool b1 = 0 < 1; //b1 = 1[true]
	bool b2 = 0 > 1; // b2 = 0[false]
					 
	// 1 ------------------------------------------------------------------
	std::cout << "bool ���" << std::endl;
	std::cout << "b0 : " << b0 << std::endl;
	std::cout << "b1 : " << b1 << std::endl;
	std::cout << "b2 : " << b2 << std::endl;
	std::cout << std::endl;

	// 2 ------------------------------------------------------------------
	std::cout << "bool ����� true, false�� �ϵ��� ����" << std::endl;
	std::cout.setf(std::ios_base::boolalpha);
	std::cout << "b0 : " << b0 << std::endl;
	std::cout << "b1 : " << b1 << std::endl;
	std::cout << "b2 : " << b2 << std::endl;
	std::cout << std::endl;

	// 3 ------------------------------------------------------------------
	std::cout << "bool�� if" << std::endl;
	if (b0)
		std::cout << "b0" << std::endl;
	if (b1)
		std::cout << "b1" << std::endl;
	if (b2)
		std::cout << "b2" << std::endl;
	std::cout << std::endl;

	// 4 ------------------------------------------------------------------
	std::cout << "bool ���� ������ �� ��ȯ" << std::endl;
	int itrue = true;
	int ifalse = false;

	std::cout << itrue << std::endl;
	std::cout << ifalse << std::endl;
	std::cout << std::endl;

	// 5 ------------------------------------------------------------------
	std::cout << "�������� bool�� �� ��ȯ" << std::endl;
	bool btrue = 100;
	bool bfalse = 0;

	std::cout << btrue << std::endl;
	std::cout << bfalse << std::endl;
	return 0;
}
