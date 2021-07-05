#include<stdio.h>
#include<string.h>
int main(){
	char s1[6] = "LOVE";
	char s2[] = "PEACE";
	
	strcat(s1, s2);
	printf("%s\n", s1);
}
