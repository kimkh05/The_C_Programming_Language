#include<iostream>
using namespace std;
// ����(����� ���Ҽ�)
void TestFunc() {
	cout << "::TestFunc()" << endl;
}
namespace TEST {
	// TEST namespace �Ҽ�
	void TestFunc() {
		cout << "TEST::TestFunc()" << endl;
	}
}
namespace MYDATA {
	// MYDATA namespace �Ҽ�
	void TestFunc() {
		cout << "MYDATA::TestFunc()" << endl;
	}
}
int main() {
	TestFunc(); // ������ ����
	::TestFunc(); // ����� ����
	TEST::TestFunc();
	MYDATA::TestFunc();
	return 0;
}
