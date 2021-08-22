#include<stdio.h>
int main() {
	int a, b = 0, c = 0;
	scanf_s("%d", &a);
	while (a > 9)
	{
		while (a > 0) {
			b = b + (a % 10);
			a = a / 10;
			printf("%d\n", b);
			printf("%d\n", a);
		}
	}
	while (b > 9) {
		while (b > 0) {
			c = c+(b % 10);
			b = b / 10;
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}
	return 0;
}