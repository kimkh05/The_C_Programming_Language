#include<iostream>
using namespace std;
int main(){
	int g, r, n;
	cin >> g;
	cin >> r;
	cin >> n;
	cout << g << r;
	if(n<10) cout << "0" << n << endl;
	else cout << n << endl;
	return 0;
}
