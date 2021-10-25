#pragma warning(disable:4996)
#pragma warning(disable:6014)
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> // printf, scanf를 위한 헤더파일
#include<stdlib.h> 
#include<iostream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<ctype.h>

#define MAX_WORD_SIZE 30
// Max_Size 설정
#define MAX_STRING_SIZE 256
// Max_String_Size 설정

using namespace std;

struct word {
	char koreanWord[MAX_WORD_SIZE][MAX_STRING_SIZE] = { "책", "가방", "노트북", "스마트폴더", "의자",
								"배구", "농구", "아이스티", "제작자", "비난", 
								"비료", "대전", "울산", "미국", "중국", 
								"필리핀", "화장실", "학습실", "출석부" ,"지우개", 
								"감자", "칠판", "코딩", "제모", "성별", 
								"밴드", "여름", "겨울", "가을", "봄"
	};
	// 한글 단어 MAX_WORD_SIZE개

	char englishWord[MAX_WORD_SIZE][MAX_STRING_SIZE] = { "Hello", "Language", "Korean", "Laptop", "mouse",
								"Korea", "index", "eraser", "glue", "glasses", 
								"TV", "computer", "coding", "Japan", "speak", 
								"English", "mask", "hacker", "develop", "apple",
								"facebook", "instagram", "samsung", "chicken", "print",
								"scan", "profitable", "comfortable", "light", "sun"
	};
	// 영어 단어 MAX_WORD_SIZE개

	char sentence[MAX_WORD_SIZE][MAX_STRING_SIZE] = { "대덕소프트웨어마이스터고등학교 1학년 1반 2번 김경호입니다", "가는 말이 고아야 오는 말이 곱다",
		"티끌모아 태산", "저 분은 백 법학박사이고 이 분은 박 법학박사이다", 
		"니 붕어 알이 크냐 내 붕어 알이 크냐", "몽실몽실 두리몽실 호박같은 내얼굴 뭉실뭉실 두리뭉실 감자같은 내엉덩이",
		"포도밭에서 먹는 포도는 포도향기가 퐁퐁 풍기고 포장마차에서 먹는 파전은 파 냄새가 팡팡 풍긴다", "라일락꽃 같은 라이안의 처녀들이 랄라라라 랄라라라 춤을 춥니다", 
		"다람 다람 다람쥐 알밤 줍는 다람쥐 보름보름 달밤에 알밤줍는 다람쥐", "개같이 벌어서 정승같이 쓴다",
		"개 눈에는 똥만 보인다", "고양이가 발톱을 감춘다",
		"홍수에 마실 물 없다더라", "세살 버릇이 여든간다", 
		"굴러온 돌이 박힌 돌 뺀다", "가는 소스가 고와야 오는 파일에 바이러스 없다",
		"디자이너는 프로그래머 편이다", "소스도 먼저 코딩하는 놈이 낫다", 
		"백업을 안 하면 삼대가 내리 흉하다", "모로 가도 서울만 가면 된다",
		"열매 될 꽃은 첫 삼월부터 안다", "	부뚜막의 소금도 집어넣어야 짜다",
		"여든에 죽어도 핑계에 죽는다", "어느 집 개가 짖느냐 한다", 
		"용 가는 데 구름 간다", "제 코드가 석자",
		"내 코가 석자", "개발자 간 빼 먹기",
		"짧은 코드가 더 아름답다", "내일 정전이 된다 해도 나는 오늘 한 줄의 코드를 쓰겠다"
	};
	// 짧은 글 MAX_WORD_SIZE개

};
// 구조체 선언

int highscore[3] = { 0, }; 
// 최고점수 전역변수로 선언
// 1번째 배열은 1번 메뉴
// 2번째 배열은 2번 메뉴
// 3번째 배열은 3번 메뉴

void loadingVar();

int mainMenu();
// 함수 선언

void gamevar(int n, int str, int i);
// 함수 선언

void practiceKorean();
// 함수 선언

void practiceEnglish();
// 함수 선언

void shortSentence();
// 함수 선언

void mainvar();
// 함수 선언

void comparison(int str, int i);

int main() {
	mainvar();
	// 함수 호출
	return 0;
}

void loadingVar() {
	system("title 타자 연습");
	for (int i = 0; i < 100; i++) {
		printf("%d%%\n\n\n\n", i);
		printf("로딩중입니다. \n");
		if (i <= 50) Sleep(100);
		else if (i > 50) Sleep(50);
		system("cls");
	}
}

int mainMenu() {
	int temp;
	int i = 0;
	printf("===========================================\n");
	printf("                타 자 연 습                \n");
	printf("===========================================\n");
	printf("1. 한글 타자연습\n\n");
	printf("   한글 최고기록 : %d\n\n", highscore[i++]);
	printf("2. 영문 타자연습\n\n");
	printf("   영문 최고기록 : %d\n\n", highscore[i++]);
	printf("3. 짧은 글 연습\n\n");
	printf("   한글 최고기록 : %d\n\n", highscore[i++]);
	printf("4. 프로그램 종료\n\n");
	printf("※ 프로그램을 종료하면 기록이 초기화된다. \n\n\n");
	printf("원하시는 번호를 선택하세요.[1~4까지]\n\n");
	printf("=> ");
	scanf("%d", &temp);
	return temp;
}
// 메인메뉴 바 함수

void gamevar(int n, int str, int i) {
	printf("===========================================\n");
	printf("                 제 시 단 어               \n");
	printf("===========================================\n");
	printf("총 개수: %d | 최고기록 : %d | 맞은 개수: %d\n\n", n, highscore[i], str);
}
// 게임 메뉴 바 함수

void practiceKorean() {
	int random = 0;
	// 랜덤 변수 선언
	struct word a;
	// 구조체 호출
	int str = 0;
	// 맞은 개수
	int m = 0;
	char word[MAX_STRING_SIZE];
	// 오답일때 Yes를 입력받는 문자열
	char check[MAX_STRING_SIZE];
	int n;
	// 반복할 갯수 변수 선언
	system("cls");
	printf("===========================================\n");
	printf("              한 글 타 자 연 습            \n");
	printf("===========================================\n\n");
	srand(time(NULL)); // 매번 다른 시드 값 생성
	printf("반복할 횟수를 입력하세요. \n");
	printf("=> ");
	scanf("%d", &n); // n 입력
	system("cls");
	if (n < 1) { // n이 1보다 작을 경우 실행
		printf("잘못입력하셨습니다. 메인으로 돌아갑니다. \n");
		return;
	}
	for (int i = 0; i < n; i++) {
		random = rand() % MAX_WORD_SIZE;
		// 랜덤함수로 난수 설정
		gamevar(n, str, 1);
		// 함수 호출
		printf("%s\n", a.koreanWord[random]);
		printf("=> ");
		scanf("%s", word);
		system("cls");
		if (!strcmp(a.koreanWord[random], word)) {
			str++;
			word == NULL;
		}
		else {
			printf("틀렸습니다.\n");
			printf("다음으로 넘어가시려면 Yes를 입력해주세요.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes"))
				system("cls");
			// 참이면 실행[check == "Yes"]
			else
				break;
			// 참이 아니면 실행[check != "Yes"]
		}
	}
	comparison(str, m);
	printf("맞은 개수 : %d\n", str);
}
// 한글 타자연습 함수

void practiceEnglish() {
	int random = 0;
	// 랜덤 변수 선언
	int m = 1;
	int n;
	// 반복할 갯수 변수 선언
	char check[MAX_STRING_SIZE];
	// 오답일때 Yes를 입력받는 문자열
	char word[MAX_STRING_SIZE];
	struct word b;
	// 구조체 호출
	int str = 0;
	system("cls");
	srand(time(NULL));
	printf("===========================================\n");
	printf("              영 어 타 자 연 습            \n");
	printf("===========================================\n\n");
	printf("반복할 횟수를 입력하세요. \n");
	printf("=> ");
	scanf("%d", &n);
	system("cls");
	if (n < 1) {
		printf("잘못 입력하셨습니다. 메인화면으로 돌아갑니다.\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		random = rand() % MAX_WORD_SIZE;
		// 랜덤함수로 난수 설정
		gamevar(n, str, 2);
		// 함수 호출
		printf("%s\n", b.englishWord[random]);
		printf("=> ");
		scanf("%s", word);
		system("cls");
		if (!strcmp(b.englishWord[random], word)) {
			str++;
			word == NULL;
		}
		else {
			printf("틀렸습니다.\n");
			printf("다음으로 넘어가시려면 Yes를 입력해주세요.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes"))
				system("cls");
			// 참이면 실행[check == "Yes"]
			else
				break;
			// 참이 아니면 실행[check != "Yes"]
		}
	}
	comparison(str, m);
	printf("맞은 개수 : %d\n", str);

}
// 영어 타자연습 함수

void shortSentence() {
	int random = 0;
	int m = 2;
	// 랜덤 변수 선언
	int n;
	// 반복할 갯수 변수 선언
	char check[MAX_STRING_SIZE];
	// 오답일때 Yes를 입력받는 문자열
	char word[MAX_STRING_SIZE];
	struct word c;
	// 구조체 호출
	int str = 0;
	system("cls");
	srand(time(NULL));
	printf("===========================================\n");
	printf("              짧 은 문 장 연 습            \n");
	printf("===========================================\n\n");
	printf("반복할 횟수를 입력하세요. \n");
	printf("=> ");
	scanf("%d", &n);
	system("cls");
	for (int i = 0; i < n; i++) {
		random = rand() % MAX_WORD_SIZE;
		// 랜덤함수로 난수 설정
		gamevar(n, str, m);
		// 함수 호출
		printf("%s\n", c.sentence[random]);
		printf("=> ");
		/*scanf("%[^\n]s", word);*/
		gets_s(word); // 오류 발생
		system("cls");
		if (!strcmp(c.sentence[random], word)) {
			str++;
			word == NULL;
		}
		else {

			printf("틀렸습니다.\n");
			printf("다음으로 넘어가시려면 Yes를 입력해주세요.\n");
			scanf("%s", check);
			if (!strcmp(check, "Yes"))
				system("cls");
			// 참이면 실행[check == "Yes"]
			else
				break;
			// 참이 아니면 실행[check != "Yes"]
		}
	}
	comparison(str, m);
	printf("맞은 개수 : %d\n", str);
}
// 짧은 글 연습 함수

void mainvar() {
	/*loadingVar();*/
	int n; // 선택 변수
	while (1) {
		n = mainMenu();
		// 선택 버튼
		switch (n) {
		case 1: // 한글 타자연습
			practiceKorean();
			// 함수 호출
			break;
		case 2: // 영문 타자연습
			practiceEnglish();
			// 함수 호출
			break;
		case 3: // 짤븐 글 연습
			shortSentence();
			// 함수 호출
			break;
		case 4: // 프로그램 종료
			system("cls");
			printf("종료합니다.\n");
			break;
		default: // n > 4 || n < 1
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		if (n == 4) break; // n == 4 일때 실행
	}
}
// 메인 선택 바 함수

void comparison(int str, int i) {
	if (highscore[i] <= str) {
		highscore[i] = str;
	}
	else return;
}