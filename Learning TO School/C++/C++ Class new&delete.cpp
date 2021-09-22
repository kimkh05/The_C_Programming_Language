#include<iostream>
using namespace std; //2021.09.14
class CTest{
	int m_nData;
public:
	CTest() : m_nData(0) { // 디폴트 생성자
		// 생성자 호출 확인, 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::CTest() " << m_nData << endl;
	}
	CTest(int nParam) :m_nData(nParam) { // 생성자(다중정의)
		// 생성자 호출 확인, 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::CTest(int nParam) " << m_nData << endl;
	}
	~CTest() { // 소멸자
		// 소멸자 호출 확인, 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::~CTest() " << m_nData << endl;
	}
};

int main() {
	cout << "Begin " << endl;

	// 객체 동적 선언 > 인스턴스 생성 > 생성자 호출(디폴트 생성자)
	CTest* p1 = new CTest;
	// 객체 동적 선언 > 인스턴스 생성 > 생성자 호출
	CTest* p2 = new CTest(10);
	// 객체 선언 > 인스턴스 생성 > 생성자 호출(디폴트 생성자)
	CTest test;

	delete p1;	// delete 연산자를 이용해 객체를 삭제
	cout << "--------------------------------" << endl;
	p1 = new CTest(20);	// 객체 동적 선언 > 인스턴스 생성 > 생성자 호출
	CTest b(30); // 객체 선언 > 인스턴스 생성 > 생성자 호출
	cout << "--------------------------------" << endl;
	delete p1; // delete 연산자를 이용해 객체를 삭제
	cout << "End " << endl;
	return 0;
}
