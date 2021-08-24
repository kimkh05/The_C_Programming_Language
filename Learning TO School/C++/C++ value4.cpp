#include <iostream>

// 참조 전달이므로 호출자 변수의 값을 변경할 수 있다.
void Swap(int& a, int& b)
{
	int nTmp = a;
	a = b;
	b = nTmp;
}

int main()
{
	int nX = 10, nY = 20;

	std::cout << "함수 호출 전"<< std::endl;
	std::cout << "nX : " << nX << std::endl;
	std::cout << "nY : " << nY << std::endl;

	// 참조 전달이며 두 변수의 값이 교환된다.
	Swap(nX, nY);

	// 교환된 결과를 출력한다.
	std::cout << "\n함수 호출 후" << std::endl;
	std::cout << "nX : " << nX << std::endl;
	std::cout << "nY : " << nY << std::endl;

	return 0;
}
