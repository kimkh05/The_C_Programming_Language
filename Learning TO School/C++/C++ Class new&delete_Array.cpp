#include<iostream>
using namespace std;
class CTest
{
	int m_nData;
public:
	CTest() : m_nData(0)	// 디폴트 생성자
	{
		// 생성자 호출 확인, 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::CTest() " << m_nData << endl;
	}
	CTest(int nParam) :m_nData(nParam) // 생성자(다중정의)
	{
		// 생성자 호출 확인, 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::CTest(int nParam) " << m_nData << endl;
	}
	~CTest()	// 소멸자
	{
		// 소멸자 호출 확인, 멤버변수의 값을 함께 출력해본다.
		cout << "CTest::~CTest() " << m_nData << endl;
	}
};
int main() {
	cout << "Begin " << endl;
	// 배열로 new 연산을 수행할 수 있다.
	// 객체 동적 선언 > 인스턴스 생성 > 생성자 호출(디폴트 생성자)
	CTest* pData = new CTest[3];
	// 객체 동적 선언 > 인스턴스 생성 > 생성자 호출
	CTest* pData2 = new CTest[3]{ 10, 20, 30 };

	// 배열로 생성한 것은 반드시 배열로 삭제한다!
	delete[] pData;

	// 객체 동적 선언 > 인스턴스 생성 > 생성자 호출
	pData = new CTest(40);

	// delete 연산자를 이용해 객체를 삭제
	delete pData;

	cout << "End " << endl;
	// 배열로 생성한 것은 반드시 배열로 삭제한다!
	delete[] pData2;
	return 0;
}
