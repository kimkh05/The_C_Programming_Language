#include<iostream>
using namespace std;
class USERDATA {
	int nAge;
	char szName[32];
};
int main() {
	// ��� ���� �Ұ�
	USERDATA user = { 20, "ö��" };
	// ��� ���� �Ұ�
	user.nAge = 25;
	// ��� ���� �Ұ�
	cout << user.nAge << ", "
		<< user.szName << endl;
	return 0;
}
