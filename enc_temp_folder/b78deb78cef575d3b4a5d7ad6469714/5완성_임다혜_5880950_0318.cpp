#include <stdio.h>
//����ü ����
typedef struct {
	//������������
	int value;
}PositiveInteger;

void calculate(int a, int b, char op) {
	int result = 0;
	//�����ڿ� ���� ��Ģ���� ����
	switch (op) {
	case '+':result = a + b; break;
	case '-':result =(a>=b)? a - b:0; break;
	case '*':result = a * b; break;
	case'/': result = (b != 0) ? a / b : 0; break;
	default:printf("�߸��� ������\n"); return;
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
