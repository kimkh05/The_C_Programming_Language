#include<iostream>
using namespace std;
// 傈开(俺充惑 公家加)
void TestFunc() {
	cout << "::TestFunc()" << endl;
}
namespace TEST {
	// TEST namespace 家加
	void TestFunc() {
		cout << "TEST::TestFunc()" << endl;
	}
}
namespace MYDATA {
	// MYDATA namespace 家加
	void TestFunc() {
		cout << "MYDATA::TestFunc()" << endl;
	}
}
int main() {
	TestFunc(); // 宫矫利 傈开
	::TestFunc(); // 疙矫利 傈开
	TEST::TestFunc();
	MYDATA::TestFunc();
	return 0;
}
