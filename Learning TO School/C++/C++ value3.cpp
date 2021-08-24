#include <iostream>

// 매개변수가 int에 대한 참조형식
void TestFunc(int& rParam)
{
	// 피 호출자 함수에서 원본의 값을 변경했다.
	rParam = 100;
}

int main()
{
	int nData = 10;

	// 참조에 의한 인수 전달
	TestFunc(nData);

	std::cout << nData << std::endl;

	return 0;
}
