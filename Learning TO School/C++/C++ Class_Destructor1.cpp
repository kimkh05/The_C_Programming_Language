#include<iostream>
using namespace std;
class CTest {
	int m_nData; // 멤버변수 private으로 선언
public:
	CTest(int nParam) :m_nData(nParam)		// 다중정의된 생성자
	{
		cout << "CTest::CTest(int nParam) " << endl; // 생성자 호출 확인
	}
	~CTest()	// 소멸자
	{
		// 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::~CTest() " << m_nData << endl; // 소멸자 호출 확인
	}
};
int main() {
	cout << "main 함수 시작" << endl;
	CTest a(20);  // 객체 선언 > 인스턴스 생성 > 생성자 호출(디폴트 생성자)
	cout << "Before b" << endl;
	CTest b(10); // 객체 선언 > 인스턴스 생성 > 생성자 호출
	// CTest c; // 디폴트 생성자는 생략으로 오류 발생!!
	cout << "main 함수 종료" << endl;
	return 0;
}
