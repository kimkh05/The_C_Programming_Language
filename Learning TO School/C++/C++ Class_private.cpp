#include<iostream>
using namespace std;
class CMyData {
	// 기본 접근 제어 지시자는 'private'이다. 
	CMyData() {} // 생성자를 private로 선언
	int m_nData;
public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};
//사용자코드
int main() {
	CMyData data;
//생성자 함수를 private으로 선언한다면 사용자 코드에서 단지 객체를 선언하는 것으로도 컴파일 오류가 발생
	return 0;
}
