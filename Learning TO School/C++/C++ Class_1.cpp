#include<iostream>
using namespace std;
// ������ �ڵ�
struct USERDATA {
	int nAge;
	char szName[32];
};
void PrintData(USERDATA* pUser, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Age : " << pUser[i].nAge << ", User Name : "
			<< pUser[i].szName << endl;
	}
}
// ����� �ڵ�
int main()
{
	USERDATA user[5] = {
		{ 20, "ö��" },
		{ 22, "����" },
		{ 23, "����" },
		{ 25, "����" },
		{ 21, "����" }
	};
	PrintData(user, 5); // 2 �ܰ�
	return 0;
}
