#include<iostream>
using namespace std;
class USERDATA {
public:
	int nAge;
	char szName[32];

	void Print() {
		cout << nAge << " " << szName << endl;
	}
};
int main() {
	USERDATA user = { 20, "Ã¶¼ö" };
	user.Print();
	return 0;
}
