#include <iostream>

// �Ű������� int�� ���� ��������
void TestFunc(int& rParam)
{
	// �� ȣ���� �Լ����� ������ ���� �����ߴ�.
	rParam = 100;
}

int main()
{
	int nData = 10;

	// ������ ���� �μ� ����
	TestFunc(nData);

	std::cout << nData << std::endl;

	return 0;
}
