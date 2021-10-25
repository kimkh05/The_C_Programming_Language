#pragma warning(disable:4996)
#pragma warning(disable:6014)
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> // printf, scanf�� ���� �������
#include<stdlib.h> 
#include<iostream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<ctype.h>

#define MAX_WORD_SIZE 30
// Max_Size ����
#define MAX_STRING_SIZE 256
// Max_String_Size ����

using namespace std;

struct word {
	char koreanWord[MAX_WORD_SIZE][MAX_STRING_SIZE] = { "å", "����", "��Ʈ��", "����Ʈ����", "����",
								"�豸", "��", "���̽�Ƽ", "������", "��", 
								"���", "����", "���", "�̱�", "�߱�", 
								"�ʸ���", "ȭ���", "�н���", "�⼮��" ,"���찳", 
								"����", "ĥ��", "�ڵ�", "����", "����", 
								"���", "����", "�ܿ�", "����", "��"
	};
	// �ѱ� �ܾ� MAX_WORD_SIZE��

	char englishWord[MAX_WORD_SIZE][MAX_STRING_SIZE] = { "Hello", "Language", "Korean", "Laptop", "mouse",
								"Korea", "index", "eraser", "glue", "glasses", 
								"TV", "computer", "coding", "Japan", "speak", 
								"English", "mask", "hacker", "develop", "apple",
								"facebook", "instagram", "samsung", "chicken", "print",
								"scan", "profitable", "comfortable", "light", "sun"
	};
	// ���� �ܾ� MAX_WORD_SIZE��

	char sentence[MAX_WORD_SIZE][MAX_STRING_SIZE] = { "�������Ʈ����̽��Ͱ���б� 1�г� 1�� 2�� ���ȣ�Դϴ�", "���� ���� ��ƾ� ���� ���� ����",
		"Ƽ����� �»�", "�� ���� �� ���йڻ��̰� �� ���� �� ���йڻ��̴�", 
		"�� �ؾ� ���� ũ�� �� �ؾ� ���� ũ��", "���Ǹ��� �θ����� ȣ�ڰ��� ���� ���ǹ��� �θ����� ���ڰ��� ��������",
		"�����翡�� �Դ� ������ ������Ⱑ ���� ǳ��� ���帶������ �Դ� ������ �� ������ ���� ǳ���", "���϶��� ���� ���̾��� ó����� ������ ������ ���� ��ϴ�", 
		"�ٶ� �ٶ� �ٶ��� �˹� �ݴ� �ٶ��� �������� �޹㿡 �˹��ݴ� �ٶ���", "������ ��� ���°��� ����",
		"�� ������ �˸� ���δ�", "����̰� ������ �����",
		"ȫ���� ���� �� ���ٴ���", "���� ������ ���簣��", 
		"������ ���� ���� �� ����", "���� �ҽ��� ��;� ���� ���Ͽ� ���̷��� ����",
		"�����̳ʴ� ���α׷��� ���̴�", "�ҽ��� ���� �ڵ��ϴ� ���� ����", 
		"����� �� �ϸ� ��밡 ���� ���ϴ�", "��� ���� ���︸ ���� �ȴ�",
		"���� �� ���� ù ������� �ȴ�", "	�ζѸ��� �ұݵ� ����־�� ¥��",
		"���翡 �׾ �ΰ迡 �״´�", "��� �� ���� ¢���� �Ѵ�", 
		"�� ���� �� ���� ����", "�� �ڵ尡 ����",
		"�� �ڰ� ����", "������ �� �� �Ա�",
		"ª�� �ڵ尡 �� �Ƹ����", "���� ������ �ȴ� �ص� ���� ���� �� ���� �ڵ带 ���ڴ�"
	};
	// ª�� �� MAX_WORD_SIZE��

};
// ����ü ����

int highscore[3] = { 0, }; 
// �ְ����� ���������� ����
// 1��° �迭�� 1�� �޴�
// 2��° �迭�� 2�� �޴�
// 3��° �迭�� 3�� �޴�

void loadingVar();

int mainMenu();
// �Լ� ����

void gamevar(int n, int str, int i);
// �Լ� ����

void practiceKorean();
// �Լ� ����

void practiceEnglish();
// �Լ� ����

void shortSentence();
// �Լ� ����

void mainvar();
// �Լ� ����

void comparison(int str, int i);

int main() {
	mainvar();
	// �Լ� ȣ��
	return 0;
}

void loadingVar() {
	system("title Ÿ�� ����");
	for (int i = 0; i < 100; i++) {
		printf("%d%%\n\n\n\n", i);
		printf("�ε����Դϴ�. \n");
		if (i <= 50) Sleep(100);
		else if (i > 50) Sleep(50);
		system("cls");
	}
}

int mainMenu() {
	int temp;
	int i = 0;
	printf("===========================================\n");
	printf("                Ÿ �� �� ��                \n");
	printf("===========================================\n");
	printf("1. �ѱ� Ÿ�ڿ���\n\n");
	printf("   �ѱ� �ְ��� : %d\n\n", highscore[i++]);
	printf("2. ���� Ÿ�ڿ���\n\n");
	printf("   ���� �ְ��� : %d\n\n", highscore[i++]);
	printf("3. ª�� �� ����\n\n");
	printf("   �ѱ� �ְ��� : %d\n\n", highscore[i++]);
	printf("4. ���α׷� ����\n\n");
	printf("�� ���α׷��� �����ϸ� ����� �ʱ�ȭ�ȴ�. \n\n\n");
	printf("���Ͻô� ��ȣ�� �����ϼ���.[1~4����]\n\n");
	printf("=> ");
	scanf("%d", &temp);
	return temp;
}
// ���θ޴� �� �Լ�

void gamevar(int n, int str, int i) {
	printf("===========================================\n");
	printf("                 �� �� �� ��               \n");
	printf("===========================================\n");
	printf("�� ����: %d | �ְ��� : %d | ���� ����: %d\n\n", n, highscore[i], str);
}
// ���� �޴� �� �Լ�

void practiceKorean() {
	int random = 0;
	// ���� ���� ����
	struct word a;
	// ����ü ȣ��
	int str = 0;
	// ���� ����
	int m = 0;
	char word[MAX_STRING_SIZE];
	// �����϶� Yes�� �Է¹޴� ���ڿ�
	char check[MAX_STRING_SIZE];
	int n;
	// �ݺ��� ���� ���� ����
	system("cls");
	printf("===========================================\n");
	printf("              �� �� Ÿ �� �� ��            \n");
	printf("===========================================\n\n");
	srand(time(NULL)); // �Ź� �ٸ� �õ� �� ����
	printf("�ݺ��� Ƚ���� �Է��ϼ���. \n");
	printf("=> ");
	scanf("%d", &n); // n �Է�
	system("cls");
	if (n < 1) { // n�� 1���� ���� ��� ����
		printf("�߸��Է��ϼ̽��ϴ�. �������� ���ư��ϴ�. \n");
		return;
	}
	for (int i = 0; i < n; i++) {
		random = rand() % MAX_WORD_SIZE;
		// �����Լ��� ���� ����
		gamevar(n, str, 1);
		// �Լ� ȣ��
		printf("%s\n", a.koreanWord[random]);
		printf("=> ");
		scanf("%s", word);
		system("cls");
		if (!strcmp(a.koreanWord[random], word)) {
			str++;
			word == NULL;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.\n");
			printf("�������� �Ѿ�÷��� Yes�� �Է����ּ���.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes"))
				system("cls");
			// ���̸� ����[check == "Yes"]
			else
				break;
			// ���� �ƴϸ� ����[check != "Yes"]
		}
	}
	comparison(str, m);
	printf("���� ���� : %d\n", str);
}
// �ѱ� Ÿ�ڿ��� �Լ�

void practiceEnglish() {
	int random = 0;
	// ���� ���� ����
	int m = 1;
	int n;
	// �ݺ��� ���� ���� ����
	char check[MAX_STRING_SIZE];
	// �����϶� Yes�� �Է¹޴� ���ڿ�
	char word[MAX_STRING_SIZE];
	struct word b;
	// ����ü ȣ��
	int str = 0;
	system("cls");
	srand(time(NULL));
	printf("===========================================\n");
	printf("              �� �� Ÿ �� �� ��            \n");
	printf("===========================================\n\n");
	printf("�ݺ��� Ƚ���� �Է��ϼ���. \n");
	printf("=> ");
	scanf("%d", &n);
	system("cls");
	if (n < 1) {
		printf("�߸� �Է��ϼ̽��ϴ�. ����ȭ������ ���ư��ϴ�.\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		random = rand() % MAX_WORD_SIZE;
		// �����Լ��� ���� ����
		gamevar(n, str, 2);
		// �Լ� ȣ��
		printf("%s\n", b.englishWord[random]);
		printf("=> ");
		scanf("%s", word);
		system("cls");
		if (!strcmp(b.englishWord[random], word)) {
			str++;
			word == NULL;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.\n");
			printf("�������� �Ѿ�÷��� Yes�� �Է����ּ���.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes"))
				system("cls");
			// ���̸� ����[check == "Yes"]
			else
				break;
			// ���� �ƴϸ� ����[check != "Yes"]
		}
	}
	comparison(str, m);
	printf("���� ���� : %d\n", str);

}
// ���� Ÿ�ڿ��� �Լ�

void shortSentence() {
	int random = 0;
	int m = 2;
	// ���� ���� ����
	int n;
	// �ݺ��� ���� ���� ����
	char check[MAX_STRING_SIZE];
	// �����϶� Yes�� �Է¹޴� ���ڿ�
	char word[MAX_STRING_SIZE];
	struct word c;
	// ����ü ȣ��
	int str = 0;
	system("cls");
	srand(time(NULL));
	printf("===========================================\n");
	printf("              ª �� �� �� �� ��            \n");
	printf("===========================================\n\n");
	printf("�ݺ��� Ƚ���� �Է��ϼ���. \n");
	printf("=> ");
	scanf("%d", &n);
	system("cls");
	for (int i = 0; i < n; i++) {
		random = rand() % MAX_WORD_SIZE;
		// �����Լ��� ���� ����
		gamevar(n, str, m);
		// �Լ� ȣ��
		printf("%s\n", c.sentence[random]);
		printf("=> ");
		/*scanf("%[^\n]s", word);*/
		gets_s(word); // ���� �߻�
		system("cls");
		if (!strcmp(c.sentence[random], word)) {
			str++;
			word == NULL;
		}
		else {

			printf("Ʋ�Ƚ��ϴ�.\n");
			printf("�������� �Ѿ�÷��� Yes�� �Է����ּ���.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes"))
				system("cls");
			// ���̸� ����[check == "Yes"]
			else
				break;
			// ���� �ƴϸ� ����[check != "Yes"]
		}
	}
	comparison(str, m);
	printf("���� ���� : %d\n", str);
}
// ª�� �� ���� �Լ�

void mainvar() {
	/*loadingVar();*/
	int n; // ���� ����
	while (1) {
		n = mainMenu();
		// ���� ��ư
		switch (n) {
		case 1: // �ѱ� Ÿ�ڿ���
			practiceKorean();
			// �Լ� ȣ��
			break;
		case 2: // ���� Ÿ�ڿ���
			practiceEnglish();
			// �Լ� ȣ��
			break;
		case 3: // ©�� �� ����
			shortSentence();
			// �Լ� ȣ��
			break;
		case 4: // ���α׷� ����
			system("cls");
			printf("�����մϴ�.\n");
			break;
		default: // n > 4 || n < 1
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		if (n == 4) break; // n == 4 �϶� ����
	}
}
// ���� ���� �� �Լ�

void comparison(int str, int i) {
	if (highscore[i] <= str) {
		highscore[i] = str;
	}
	else return;
}