#include <stdio.h>
int main() {
int a,b;
char op;
printf("첫 번째 정수: ");
scanf("%d",&a);
printf("두 번째 정수: ");
scanf("%d",&b);
printf("연산 선택 (+,-,*,/): ");
scanf(" %c", &op);
if (op == '+') {
    printf("결과: %d\n", a+b);
} else if (op == '-') {
    printf("결과: %d\n", a-b);
} else if (op == '*') {
    printf("결과: %d\n", a*b);
} else if (op == '/') {
    if (b == 0) {
        printf("오류!! 0으로 나눌 수 없음.\n");
    } else {
        printf("결과: %d\n",a/b);
    }
    } else {
        printf("올바른 연산자를 입력하세요.\n");
    }
    return 0;
}
