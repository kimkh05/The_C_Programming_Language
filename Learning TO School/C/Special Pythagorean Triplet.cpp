#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int pythshotrean() {
	int a = 0, b = 0, c = 0, n;
	for (a = 1; a <= 500; a++) {
		for (b = 1; b <= 500; b++) {
			c = 1000 - a - b;
			if(a > b && a * a + b * b == c * c) return a * b * c;
		}
	}
	return 0;
}
int main() {
	int a = pythshotrean(); // 함수 호출
	printf("%d\n", a);
	return 0;
}
// Question : Special Pythagorean triplet
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a^2 + b^2 = c^2
// For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
