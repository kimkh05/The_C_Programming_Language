#include<iostream>
using namespace std;
class CTest{
private:
	int num;
public:
	CTest(int n) : num(n) { // 생성자
		cout << "CTest::CTest() " << num << endl; // 객체 생성시점 확인
	}
	~CTest() { // 소멸자
		cout << "CTest::~CTest() " << num << endl; // 객체 소멸시점 확인
	}
};
CTest one(1);
int main(){
	cout << "main 함수 시작" << endl;
	CTest two(2); {
		CTest three(3);
	}
	cout << "main 함수 종료" << endl;
	return 0;
}
