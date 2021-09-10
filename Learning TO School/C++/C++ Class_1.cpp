#include<iostream>
using namespace std;
// 제작자 코드
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
// 사용자 코드
int main()
{
	USERDATA user[5] = {
		{ 20, "철수" },
		{ 22, "영희" },
		{ 23, "은기" },
		{ 25, "교영" },
		{ 21, "수형" }
	};
	PrintData(user, 5); // 2 단계
	return 0;
}
