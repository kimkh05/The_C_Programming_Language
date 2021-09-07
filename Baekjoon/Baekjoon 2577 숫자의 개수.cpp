#include<iostream>
using namespace std;
int main(){
	int str = 1;
	int arr[3] = {0, };
	int t[10] = {0, };
	for(int i = 0; i<3;i++) {
		cin >> arr[i];
		str *= arr[i];
	}
	while(str > 0){
		arr[str % 10]++;
		str /= 10;
	}
	for(int i = 0;i<10;i++) cout << arr[i] << endl;
	return 0;
}
