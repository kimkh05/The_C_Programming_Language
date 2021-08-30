#include<stdio.h>
int main(){
	char str[100];
	char cnt[100];
	scanf("%s", str);
	for(int i = 0;i<100;i++){
		if(i==0) cnt[0] = str[0];
		else if(str[i] == '-') cnt[i] = str[i+1];
	}
	for(int i = 0;i<100;i++){
		if(cnt[i]==NULL) printf("=", cnt[i]);
	}
	return 0;
}
