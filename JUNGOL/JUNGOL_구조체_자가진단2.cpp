#include<stdio.h>
struct main{
	char school[20];
	int grade;
};
int main(){
	struct main menu1 = {"Jejuelementary", 6};
	struct main menu;
	scanf("%s %d", menu.school, &menu.grade);
	printf("%d grade in %s School\n", menu1.grade, menu1.school);
	printf("%d grade in %s School\n", menu.grade, menu.school);
	return 0;
}
