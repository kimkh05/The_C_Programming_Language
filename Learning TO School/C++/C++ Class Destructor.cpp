#include<iostream>
using namespace std;
class CTest {
	int num;	
public:
	CTest(int n) : num(n) { // 생성자
		cout << "CTest::CTest()  << num << endl; // 생성자 호출 확인
	}
	~CTest() {// 소멸자
		cout << "CTest::~CTest() " << endl; // 소멸자 호출 확인
	}
};
int main() {
	cout << "Begin " << endl;
	CTest a;
	cout << "Before b" << endl;
	CTest b;
	cout << "End " << endl;
	return 0;
}
