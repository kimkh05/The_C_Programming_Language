#include <iostream>
int main()
{
	int nData = 10;

	// nData �ν��Ͻ��� ���� ������ ����
	int& ref = nData;

	// �������� ���� �����ϸ� ������ ����ȴ�!
	ref = 20;

	std::cout << nData << std::endl;

	// �����͸� ���� �Ͱ� ����ϴ�.
	int* pnData = &nData;
	*pnData = 30;
	std::cout << nData << std::endl;

	return 0;
}
