#include<iostream>
int add(int a, int b = 10);
int main(){
	int res = add(5, 7);
	std::cout << "res : " << res << std::endl;
	res = add(5);
	std::cout << "res : " << res << std::endl;
	return 0;
}
int add(int a, int b){
	return a + b;
}
