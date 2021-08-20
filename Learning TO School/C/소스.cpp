#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <windows.h>

struct menu { //����ü menu����
	char name[20] = { 0, };
	double grade = 0; // �й� ����
	double English = 0;
	double Korean = 0;
	double Math = 0; // ���� ������ ����
};
struct menu m2[20];//����ü ���� ����
void personal() { //�ʹ� ���� �Լ�
	printf("\n��������������������������������������������������������������������\n\n");
	printf("���� �ִ� 20������ �����ϰڽ��ϴ�.\n");
	printf("����� ������ ���Ͻǲ�����?\n");
	printf("\n��������������������������������������������������������������������\n\n");
}

void repeat(char name1[20], double* grade1, double* Korean1, double* Math, double* English1) { //���� ���� �Լ�
	printf("\n�̸��� �Է����ּ���.\n");
	scanf("%s", name1);
	printf("\n�й��� �Է����ּ���.\n");
	scanf("%lf", &*grade1);
	printf("\n������� �Է����ּ���.\n");
	scanf("%lf", &*Korean1);
	printf("\n���м����� �Է����ּ���.\n");
	scanf("%lf", &*Math);
	printf("\n������� �Է��ϼ���.\n");
	scanf("%lf", &*English1);
}

void swap(int a, double q[20]) { //a�� ��� ���, q�� avg1, w�� avg2
	double tmp1 = 0;//�ӽð� ����
	char str[20];
	for (int i = 0; i < a-1; i++) { //���� �ȿ� ���� ��ġ�� �����Ű�� �ݺ���
		for (int j = i + 1; j < a; j++) { 
			q[i] = m2[i].Korean + m2[i].Math + m2[i].English;
			q[j]= m2[j].Korean + m2[j].Math + m2[j].English;
			if (q[i] < q[j]) {
				strcpy(str, m2[i].name);
				strcpy(m2[i].name, m2[j].name);
				strcpy(m2[j].name, str);

				tmp1 = m2[i].Math;
				m2[i].Math = m2[j].Math;
				m2[j].Math = tmp1;

				tmp1 = m2[i].English;
				m2[i].English = m2[j].English;
				m2[j].English = tmp1;

				tmp1 = m2[i].Korean;
				m2[i].Korean = m2[j].Korean;
				m2[j].Korean = tmp1;

				tmp1 = m2[i].grade;
				m2[i].grade = m2[j].grade;
				m2[j].grade = tmp1;
			}
		}
	}
}
int returning() { // �ݺ� Ȯ�� �Լ�
	int x = 0;
	printf("\n\n���α׷��� ����Ǿ����ϴ�.\n");
	while (1) {
		printf("\n\n����������������������������������������������������������������������������\n\n");
		printf("���α׷��� �����Ű�ðڽ��ϱ�? \n(�����Ű���� 1��, �ٽ� �����ϱ� ���ϸ� 2��)\n\n");
		scanf("%d", &x);
		if (x == 1) { //x�� 1�϶� ����
			printf("'����'�� �����Ͽ����ϴ�. ���α׷��� �����մϴ�.\n\n");
			printf("����������������������������������������������������������������������������\n\n\n\n");
			system("cls");
			break;
		}
		else if (x == 2) { //x�� 2�϶� ����
			printf("'�ٽ� ����'�� �����Ͽ����ϴ�. ���α׷��� �ٽ� �����մϴ�.\n\n");
			printf("����������������������������������������������������������������������������\n\n\n\n");
			system("cls");
			break;
		}
		else printf("��Ȯ�ϰ� �Է����ּ���.\n\n"); //�ٸ� ���� �Է¹��� �� ����
	}
	return x; //x�� �����Լ��� ��ȯ
}

int main() { //����
	int n = 0;// �� ��� ����
	int x = 0;// �ؿ� �ݺ� ���� ����
	char name2[20] = { 0, };
	double tmp = 0; //�й� �ӽ� ���� ����
	double Korean2, Math2, English2 = 0; // ����, ����, ���� �ӽú��� ����
	double avg1[20] = { 0, }; //���� ����[i]�� ����
	double avg2[20] = { 0, }; //���� ����[j]�� ����
	while (1) {
		personal();// �Լ� ȣ��
		printf("����� �Է��ұ��?\n");
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			repeat(m2[i].name, &tmp, &Korean2, &Math2, &English2);
			m2[i].grade = tmp, m2[i].Korean = Korean2, m2[i].Math = Math2, m2[i].English = English2;
			
		}
		for (int i = 0; i < n; i++) {
			avg1[i] = m2[i].Korean + m2[i].English + m2[i].Math;
		}
		for (int i = 0; i < n; i++) {
			swap(n, &avg1[i]);
		}
		for (int i = 0; i < n; i++) {
			printf("\n%2d��  ���� \n\n�̸� : %s, �й� : %.0lf, ��� : %.2lf�� \n", i + 1, m2[i].name, m2[i].grade, (m2[i].Korean + m2[i].Math + m2[i].English) / 3);
		}
		x = returning();
		if (x == 1) break;
		else if (x == 2) continue;
	}
	
	return 0;
}
