#include<iostream>
using namespace std;
struct USERDATA {
	int nAge;
	char szName[32];
};
int main() {
	// ��� ���� ����
	USERDATA user = { 20, "ö��" };
	// ��� ���� ����
	user.nAge = 25;
	// ��� ���� ����
	cout << user.nAge << ", "
		<< user.szName << endl;
	return 0;
}
