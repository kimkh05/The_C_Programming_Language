#include <iostream>

// ���� �����̹Ƿ� ȣ���� ������ ���� ������ �� �ִ�.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int nX = 10, nY = 20;

	std::cout << "�Լ� ȣ�� ��"<< std::endl;
	std::cout << "nX : " << nX << std::endl;
	std::cout << "nY : " << nY << std::endl;

	// ���� �����̸� �� ������ ���� ��ȯ�ȴ�.
	Swap(nX, nY);

	// ��ȯ�� ����� ����Ѵ�.
	std::cout << "\n�Լ� ȣ�� ��" << std::endl;
	std::cout << "nX : " << nX << std::endl;
	std::cout << "nY : " << nY << std::endl;

	return 0;
}
