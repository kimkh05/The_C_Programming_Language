#include<iostream>
using namespace std; // 2021.09.08
// 제작자 코드
struct USERDATA {
	int nAge;
	char szName[32];
};
// 사용자 코드
int main() {
	USERDATA user[5] = {
		{ 20, "철수" },
		{ 22, "영희" },
		{ 23, "은기" },
		{ 25, "교영" },
		{ 21, "수형" },
	};
	for (auto n : user) {
		cout << "Age : " << n.nAge << ", User Name : "
			<< n.szName << endl;
	}
	return 0;
}
