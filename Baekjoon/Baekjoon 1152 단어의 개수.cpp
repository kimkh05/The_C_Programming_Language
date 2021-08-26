#include<stdio.h>
int main(){
	int cnt = 0;
	char str[1000001];
	scanf("%s", str);
	for(int i = 0;str[i]!='\0';i++){
		if(str[i] != 0){
			if(i>0&&str[i-1] != ' ') continue;
			else cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
} 
