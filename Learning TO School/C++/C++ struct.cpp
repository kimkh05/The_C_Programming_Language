#include<iostream>
using namespace std; // 2021.09.08
// ������ �ڵ�
struct USERDATA {
	int nAge;
	char szName[32];
};
// ����� �ڵ�
int main() {
	USERDATA user[5] = {
		{ 20, "ö��" },
		{ 22, "����" },
		{ 23, "����" },
		{ 25, "����" },
		{ 21, "����" },
	};
	for (auto n : user) {
		cout << "Age : " << n.nAge << ", User Name : "
			<< n.szName << endl;
	}
	return 0;
}
