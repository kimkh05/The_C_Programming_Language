#include<iostream>
using namespace std;
// 제작자 코드
class CTest {
public:
	// 생성자 함수
	CTest() { }
	// C++11 부터 선언과 동시에 멤버 변수를 초기화 할 수 있다.
	int m_nData1 = 10;
	int m_nData2 = 20;
	// 멤버 함수 선언 및 정의
	void PrintData() {
		cout << m_nData1 << endl;
		cout << m_nData2 << endl;
	}
};
// 사용자의 코드
int main() {
	CTest t;
	t.PrintData();
	return 0;
}
