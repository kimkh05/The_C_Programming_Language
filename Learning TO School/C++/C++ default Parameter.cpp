#include<iostream>
int calcEarning(int rate, int hours = 40);
int main() {
	int n  = 0, m = 0, q = 0;
	std::cout << "������ ������ ����մϴ�." << std::endl;
	while(n >= 0) {
		std::cout << "������ �ñް� �ð��� ���ʷ� �Է��ϼ��� : ";
		std::cin >> n;
		if(n>0) std::cin >> m;
		if (m > 0) q = calcEarning(n, m);
		else if (n == 0) break;
		else q = calcEarning(n);
		std::cout << "������ �ӱ� : " << q << std::endl;
	}
	return 0;
}
int calcEarning(int rate, int hours) {
	return rate * hours;
}
