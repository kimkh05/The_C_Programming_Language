#pragma warning (disable : 4996)
#pragma warning (disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>
#include <windows.h>

struct menu { //구조체 menu선언
	char name[20] = { 0, };
	double grade = 0; // 학번 선언
	double English = 0;
	double Korean = 0;
	double Math = 0; // 과목 성적들 선언
};
struct menu m2[20];//구조체 변수 선언
void personal() { //초반 설명 함수
	printf("\n──────────────────────────────────\n\n");
	printf("반은 최대 20명으로 가정하겠습니다.\n");
	printf("몇명의 성적을 비교하실껀가요?\n");
	printf("\n──────────────────────────────────\n\n");
}

void repeat(char name1[20], double* grade1, double* Korean1, double* Math, double* English1) { //과목 성적 함수
	printf("\n이름을 입력해주세요.\n");
	scanf("%s", name1);
	printf("\n학번을 입력해주세요.\n");
	scanf("%lf", &*grade1);
	printf("\n국어성적을 입력해주세요.\n");
	scanf("%lf", &*Korean1);
	printf("\n수학성적을 입력해주세요.\n");
	scanf("%lf", &*Math);
	printf("\n영어성적을 입력하세요.\n");
	scanf("%lf", &*English1);
}

void swap(int a, double q[20]) { //a는 사람 명수, q는 avg1, w는 avg2
	double tmp1 = 0;//임시값 선언
	char str[20];
	for (int i = 0; i < a-1; i++) { //베열 안에 값의 위치를 변경시키는 반복문
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
int returning() { // 반복 확인 함수
	int x = 0;
	printf("\n\n프로그램이 종료되었습니다.\n");
	while (1) {
		printf("\n\n──────────────────────────────────────\n\n");
		printf("프로그램을 종료시키시겠습니까? \n(종료시키려면 1번, 다시 실행하길 원하면 2번)\n\n");
		scanf("%d", &x);
		if (x == 1) { //x가 1일때 실행
			printf("'종료'를 선택하였습니다. 프로그램을 종료합니다.\n\n");
			printf("──────────────────────────────────────\n\n\n\n");
			system("cls");
			break;
		}
		else if (x == 2) { //x가 2일때 실행
			printf("'다시 실행'를 선택하였습니다. 프로그램을 다시 실행합니다.\n\n");
			printf("──────────────────────────────────────\n\n\n\n");
			system("cls");
			break;
		}
		else printf("정확하게 입력해주세요.\n\n"); //다른 값을 입력받을 때 실행
	}
	return x; //x를 메인함수에 반환
}

int main() { //메인
	int n = 0;// 반 명수 선언
	int x = 0;// 밑에 반복 변수 선언
	char name2[20] = { 0, };
	double tmp = 0; //학번 임시 변수 선언
	double Korean2, Math2, English2 = 0; // 국어, 수학, 영어 임시변수 선언
	double avg1[20] = { 0, }; //성적 총합[i]의 선언
	double avg2[20] = { 0, }; //성적 총합[j]의 선언
	while (1) {
		personal();// 함수 호출
		printf("몇명을 입력할까요?\n");
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
			printf("\n%2d등  성적 \n\n이름 : %s, 학번 : %.0lf, 평균 : %.2lf점 \n", i + 1, m2[i].name, m2[i].grade, (m2[i].Korean + m2[i].Math + m2[i].English) / 3);
		}
		x = returning();
		if (x == 1) break;
		else if (x == 2) continue;
	}
	
	return 0;
}
