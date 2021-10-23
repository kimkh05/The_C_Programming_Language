#pragma warning(disable:4996)
#pragma warning(disable:6014)
#define _CRT_SECURE_NO_WARNING
#include<stdio.h> // printf, scanf�� ���� �������
#include<stdlib.h> 
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<ctype.h>

struct word {
	char koreanWord[30][256] = { "å", "����", "��Ʈ��", "����Ʈ����", "����", 
								"�豸", "��", "���̽�Ƽ", "������", "��", 
								"���", "����", "���", "�̱�", "�߱�", 
								"�ʸ���", "ȭ���", "�н���", "�⼮��" ,"���찳", 
								"����", "ĥ��", "�ڵ�", "����", "����", 
								"���", "����", "�ܿ�", "����", "��"};
	// �ѱ� �ܾ� 30��

	char englishWord[30][256] = { "Hello", "Language", "Korean", "Laptop", "mouse", 
								"Korea", "index", "eraser", "glue", "glasses", 
								"TV", "computer", "coding", "Japan", "speak", 
								"English", "mask", "hacker", "develop", "apple",
								"facebook", "instagram", "samsung", "chicken", "print",
								"scan", "profitable", "comfortable", "light", "sun"};
	// ���� �ܾ� 30��

	char sentence[30][256] = { "�������Ʈ����̽��Ͱ���б� 1�г� 1�� 2�� ���ȣ�Դϴ�", "���� ���� ��ƾ� ���� ���� ����",
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
	// ª�� �� 30��

};
// ����ü ����

int highscore[3] = { 0, }; 
// �ְ����� ���������� ����

int mainMenu() {
	int temp;
	printf("===========================================\n");
	printf("                Ÿ �� �� ��                \n");
	printf("===========================================\n");
	printf("1. �ѱ� Ÿ�ڿ���\n");
	printf("2. ���� Ÿ�ڿ���\n");
	printf("3. ª�� �� ����\n");
	printf("4. ���α׷� ����\n\n");
	printf("=> ");
	scanf("%d", &temp);
	return temp;
}
// ���θ޴� �� �Լ�

void gamevar(int n, int str) {
	printf("===========================================\n");
	printf("                 �� �� �� ��               \n");
	printf("===========================================\n");
	printf("�� ����: %d                 ���� ����: %d  \n\n", n, str);
}
// ���� �޴� �� �Լ�

void practiceKorean() {
	int random = 0;
	struct word a;
	int str = 0; // ���� ����
	char word[256];
	char check[256];
	int n; // �ݺ� Ƚ�� ����
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
		random = rand() % 30; // �����Լ��� ���� ����
		gamevar(n, str); // ��ܹ� ����
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
			if (!strcmp(check, "Yes")) system("cls");
			else break;
		}

	}
	printf("���� ���� : %d\n", str);
}
// �ѱ� Ÿ�ڿ��� �Լ�

void practiceEnglish() {
	int random = 0;
	int n;
	char check[256];
	char word[256];
	struct word b;
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
		random = rand() % 30; 
		// �����Լ��� ���� ����
		gamevar(n, str);
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
			if (!strcmp(check, "Yes")) system("cls");
			else break;
		}
	}
	printf("���� ���� : %d\n", str);
	
}
// ���� Ÿ�ڿ��� �Լ�

void shortSentence() {
	int random = 0;
	int n;
	char check[256];
	char word[256];
	struct word c;
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
		random = rand() % 30;
		gamevar(n, str);
		printf("%s\n", c.sentence[random]);
		printf("=> ");
		scanf("%s", word);
		if (!strcmp(c.sentence[random], word)) {
			str++;
			word == NULL;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.\n");
			printf("�������� �Ѿ�÷��� Yes�� �Է����ּ���.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes")) system("cls");
			else break;
		}
	}
	printf("���� ���� : %d\n", str);
}
// ª�� �� ���� �Լ�

void mainvar() {
	int n; // ���� ����
	while (1) {
		n = mainMenu(); // ���� ��ư
		switch (n) {
		case 1: // �ѱ� Ÿ�ڿ���
			practiceKorean();
			break;
		case 2: // ���� Ÿ�ڿ���
			practiceEnglish();
			break;
		case 3: // ©�� �� ����
			shortSentence();
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

int main() {
	mainvar();
}