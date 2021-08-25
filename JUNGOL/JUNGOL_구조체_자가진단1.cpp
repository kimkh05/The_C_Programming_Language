#include<stdio.h>
struct menu{
	char name[20];
	char school[20];
	int grade;
};
int main(){
	struct menu m1;
	scanf("%s %s %d", m1.name, m1.school, &m1.grade);
	printf("Name : %s\n", m1.name);
	printf("School : %s\n", m1.school);
	printf("Grade : %d\n", m1.grade);
	return 0;
} 
