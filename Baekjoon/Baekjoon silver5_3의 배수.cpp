#pragma warning(disable : 4996)
#include<stdio.h>
int main(){
	int x=0;
	int y=0; 
	int str=0;
	scanf("%d", &x);
	 while(x) {
        y += x % 10;
        x /= 10;
    }
    str++;
    while(1){
    	if(y>10){
    		while(y) {
        		x += y % 10;
       		 	y /= 10;
    		}
    		str++;
    		while(x) {
        		y += x % 10;
        		x /= 10;
    		}
    		str++;
		}
		else break;
	}
    printf("%d\n", str);
    if(y%3==0){
    	printf("YES");
	}
	else printf("NO");
	return 0;
}
