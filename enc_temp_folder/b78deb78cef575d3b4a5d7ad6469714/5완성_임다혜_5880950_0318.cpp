#include <stdio.h>
//구조체 정의
typedef struct {
	//양의정수저장
	int value;
}PositiveInteger;

void calculate(int a, int b, char op) {
	int result = 0;
	//연산자에 따라 사칙연산 수행
	switch (op) {
	case '+':result = a + b; break;
	case '-':result =(a>=b)? a - b:0; break;
	case '*':result = a * b; break;
	case'/': result = (b != 0) ? a / b : 0; break;
	default:printf("잘못된 연산자\n"); return;
	}
	printf("%d %c %d = %d\n", a, op, b, result);
}


int main() {
	int a, b;
	char op;
	scanf_s("%d%c%d", &a, &op, &b);
	calculate(a, b, op);

	return 0;
}
