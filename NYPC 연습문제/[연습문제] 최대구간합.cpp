#include <stdio.h>
long long int max;
long long int max2;
int main(){
    int cnt, num,i;
    scanf("%d", &cnt);
    scanf("%lld", &max);
    max2 = max;
    for (i = 2; i <= cnt; i++){
        scanf("%d", &num);
        if (max + num > num){
            max = max + num;
        }
        else max = num;

        if (max2 < max)max2 = max;
    }
    printf("%lld\n", max2);
    return 0;
}
