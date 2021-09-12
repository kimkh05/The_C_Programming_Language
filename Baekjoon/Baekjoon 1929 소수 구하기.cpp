#include<iostream>
using namespace std;
int main(){
	int n, m;
	int j; 
	int cnt = 0;
	cin >> n >> m;
	for(int i = n;i<=m;i++){
		for(j = 2;j<i;j++){
			if(i%j == 0) break;
		}
		if(j == i) cout << i << endl;
	}
	return 0;
} //답은 맞지만 시간초과 떴음.. 
