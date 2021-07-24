#include<stdio.h>
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    for( ; a<=b;){
        printf("%.2lf ", a);
        a+=0.01;
    } 
}
