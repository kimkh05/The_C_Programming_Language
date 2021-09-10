#include<iostream>
using namespace std;
class USERDATA {
	int nAge;
	char szName[32];
};
int main() {
	// ¸â¹ö Á¢±Ù ºÒ°¡
	USERDATA user = { 20, "Ã¶¼ö" };
	// ¸â¹ö Á¢±Ù ºÒ°¡
	user.nAge = 25;
	// ¸â¹ö Á¢±Ù ºÒ°¡
	cout << user.nAge << ", "
		<< user.szName << endl;
	return 0;
}
