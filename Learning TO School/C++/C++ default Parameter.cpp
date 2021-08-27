#include<iostream>
int calcEarning(int rate, int hours = 40);
int main() {
	int n  = 0, m = 0, q = 0;
	std::cout << "직원의 수입을 계산합니다." << std::endl;
	while(n >= 0) {
		std::cout << "직원의 시급과 시간을 차례로 입력하세요 : ";
		std::cin >> n;
		if(n>0) std::cin >> m;
		if (m > 0) q = calcEarning(n, m);
		else if (n == 0) break;
		else q = calcEarning(n);
		std::cout << "직원의 임금 : " << q << std::endl;
	}
	return 0;
}
int calcEarning(int rate, int hours) {
	return rate * hours;
}
