#include<iostream>
int main() {
	//선언과 동시에 반드시 초기화 해야함 ( 형식 &이름 = 원본; )
	// 포인터와 구조적으로 비슷하다.
	int score = 10;
	int& rScore = score;  // score 변수에 대한 참조자 선언

	// //참조 관계를 변경하려고 할 때 컴파일 오류가 발생함
	//int score = 92;
	//int& rScore = score;
	//int num = 80;
	//int& rScore = num; // 에러발생! 참조관계를 변경할 수 없다!
	
	//참조 변수에 대입은 가능
	int score = 92;
	int& rScore = score;
	int num = 80;
	rScore = num;

	//하나의 변수를 기반으로 여러 개의 참조 변수를 만들 수 있음
	int num = 100;
	int& rNum1 = num;	// num 변수에 대한 참조자 선언
	int& rNum2 = num;	// num 변수에 대한 참조자 선언
	int& rNum3 = num;	// num 변수에 대한 참조자 선언

	// // 참조 불가능한 경우
	//int* pData = &3; // 불가능
	//int& rData = 3;  // 상수에 대한 참조는 불가능
	//int& rData2;     // 참조 원본이 없으므로 불가능
}
