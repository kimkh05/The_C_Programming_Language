#include<iostream>
using namespace std;
struct USERDATA {
	int nAge;
	char szName[32];
};
int main() {
	// ¸â¹ö Á¢±Ù °¡´É
	USERDATA user = { 20, "Ã¶¼ö" };
	// ¸â¹ö Á¢±Ù °¡´É
	user.nAge = 25;
	// ¸â¹ö Á¢±Ù °¡´É
	cout << user.nAge << ", "
		<< user.szName << endl;
	return 0;
}
