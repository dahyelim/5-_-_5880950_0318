#include <stdio.h>

// ��Ģ������ ���� ����ü ����
typedef struct {
    int num1;
    int num2;
} Arithmetic;

// ���� �Լ�
int add(Arithmetic arith) {
    return arith.num1 + arith.num2;
}

// ���� �Լ�
int subtract(Arithmetic arith) {
    return arith.num1 - arith.num2;
}

// ���� �Լ�
int multiply(Arithmetic arith) {
    return arith.num1 * arith.num2;
}

// ������ �Լ�
float divide(Arithmetic arith) {
    if (arith.num2 != 0) {
        return (float)arith.num1 / arith.num2;
    }
    else {
        printf("������ ����: 0���� ���� �� �����ϴ�.\n");
        return 0;
    }
}

int main() {
    int num1, num2;

    // ����ڷκ��� ���� ���� �Է¹ޱ�
    printf("ù ��° ���� ������ �Է��ϼ���: ");
    scanf_s("%d", &num1);

    printf("�� ��° ���� ������ �Է��ϼ���: ");
    scanf_s("%d", &num2);

    // Arithmetic ����ü �ʱ�ȭ
    Arithmetic arith = { num1, num2 };

    // ��Ģ���� ��� ���
    printf("����: %d\n", add(arith));
    printf("����: %d\n", subtract(arith));
    printf("����: %d\n", multiply(arith));
    printf("������: %.2f\n", divide(arith));

    return 0;
}

