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
int main()
{
	cout << "Begin " << endl;
	CTest* pData[5];	// 객체 포인터 선언 ( 객체 생성아님!!)

	int i = 1;
	for (auto& n : pData)
		n = new CTest(i++); // 여기서 동적으로 객체를 생성!!

	// delete 연산자를 이용해 객체를 삭제
	// delete [] pData; 이거 아님!!!
	for (auto& n : pData)
		delete n;		// 객체 생성한 만큼 객체를 삭제!!

	cout << "End " << endl;
	return 0;
}
