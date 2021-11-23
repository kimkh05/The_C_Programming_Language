#define _CRT_SECURE_NO_WARNINGS
#include <iostream> // std::cout, std::cin을 사용하기 위한 헤더 파일
#include<Windows.h> // system("cls")를 위한 헤더 파일
#include"CMyList.h"
using namespace std;

int printfun(CMyList *list) {
    int n;
    int num;
    cout << "----------------" << endl;
    cout << "1. 삽입" << endl;
    cout << "2. 삭제" << endl;
    cout << "3. 출력" << endl;
    cout << "4. 프로그램 종료" << endl;
    cout << "----------------" << endl;
    cin >> n;
    switch (n) {
        case 1: // insert
            cout << "숫자를 입력하세요." << endl;
            cin >> num;
            return n;
            break;
        case 2: // delete
            return n;
            break;
        case 3: // print
            return n;
            break;
        case 4:
            return n;
            break;
        default: // else
            return n;
            break;
    }
}

int main() {
    CMylink* list;
    
    while (1) {
        int n = printfun(list); // 메인 print 화면 호출
        if (n == 4) break;
        else system("cls");
    }
    system("cls");
    cout << "프로그램을 종료합니다." << endl;
    return 0;
}