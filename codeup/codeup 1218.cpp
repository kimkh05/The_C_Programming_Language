#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a+b>c&&b+c>a&&c+a>b){
		if(a==b && a==c) cout << "���ﰢ��" << endl;
		else if(a==b||b==c||a==c) cout << "�̵�ﰢ��" << endl;
		else if(a*a + b*b == c*c) cout << "�����ﰢ��" << endl;
		else cout << "�ﰢ��";
	}
	else cout << "�ﰢ���ƴ�" << endl;
	return 0; 
}
