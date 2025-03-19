#include <stdio.h>

// 사칙연산을 위한 구조체 정의
typedef struct {
    int num1;
    int num2;
} Arithmetic;

// 덧셈 함수
int add(Arithmetic arith) {
    return arith.num1 + arith.num2;
}

// 뺄셈 함수
int subtract(Arithmetic arith) {
    return arith.num1 - arith.num2;
}

// 곱셈 함수
int multiply(Arithmetic arith) {
    return arith.num1 * arith.num2;
}

// 나눗셈 함수
float divide(Arithmetic arith) {
    if (arith.num2 != 0) {
        return (float)arith.num1 / arith.num2;
    }
    else {
        printf("나눗셈 오류: 0으로 나눌 수 없습니다.\n");
        return 0;
    }
}

int main() {
    int num1, num2;

    // 사용자로부터 양의 정수 입력받기
    printf("첫 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &num1);

    printf("두 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &num2);

    // Arithmetic 구조체 초기화
    Arithmetic arith = { num1, num2 };

    // 사칙연산 결과 출력
    printf("덧셈: %d\n", add(arith));
    printf("뺄셈: %d\n", subtract(arith));
    printf("곱셈: %d\n", multiply(arith));
    printf("나눗셈: %.2f\n", divide(arith));

    return 0;
}

