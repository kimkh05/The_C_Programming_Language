#include<iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if(a+b>c&&b+c>a&&c+a>b){
		if(a==b && a==c) cout << "Á¤»ï°¢Çü" << endl;
		else if(a==b||b==c||a==c) cout << "ÀÌµîº¯»ï°¢Çü" << endl;
		else if(a*a + b*b == c*c) cout << "Á÷°¢»ï°¢Çü" << endl;
		else cout << "»ï°¢Çü";
	}
	else cout << "»ï°¢Çü¾Æ´Ô" << endl;
	return 0; 
}
