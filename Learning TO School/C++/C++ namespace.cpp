#include<iostream>
// std ���ӽ����̽��� using ������ �����Ѵ�.
using namespace std;
namespace TEST {
	int g_nData = 100;
	void TestFunc() {
		// cout , endl �� ���ؼ� ������ �������� �ʾƵ� �ȴ�. ( using �����߱� ����)
		cout << "TEST:: TestFunc()" << endl;
	}
}
// TEST ���ӽ����̽��� using ������ �����Ѵ�.
using namespace TEST;
int main() {
	// TestFunc()�� g_nData �� ���ؼ� ������ �������� �ʾƵ� �ȴ�. ( using �����߱� ����)
	TestFunc();
	cout << g_nData << endl;
	return 0;
}
