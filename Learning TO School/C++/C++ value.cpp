#include<iostream>
int main() {
	//����� ���ÿ� �ݵ�� �ʱ�ȭ �ؾ��� ( ���� &�̸� = ����; )
	// �����Ϳ� ���������� ����ϴ�.
	int score = 10;
	int& rScore = score;  // score ������ ���� ������ ����

	// //���� ���踦 �����Ϸ��� �� �� ������ ������ �߻���
	//int score = 92;
	//int& rScore = score;
	//int num = 80;
	//int& rScore = num; // �����߻�! �������踦 ������ �� ����!
	
	//���� ������ ������ ����
	int score = 92;
	int& rScore = score;
	int num = 80;
	rScore = num;

	//�ϳ��� ������ ������� ���� ���� ���� ������ ���� �� ����
	int num = 100;
	int& rNum1 = num;	// num ������ ���� ������ ����
	int& rNum2 = num;	// num ������ ���� ������ ����
	int& rNum3 = num;	// num ������ ���� ������ ����

	// // ���� �Ұ����� ���
	//int* pData = &3; // �Ұ���
	//int& rData = 3;  // ����� ���� ������ �Ұ���
	//int& rData2;     // ���� ������ �����Ƿ� �Ұ���
}
