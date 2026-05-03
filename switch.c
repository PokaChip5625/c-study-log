#include <stdio.h>
int main() {
    int a, b;
    char p;
    printf("첫 번째 정수: ");
    scanf("%d", &a);
    printf("두 번째 정수: ");
    scanf("%d", &b);
    printf("연산 선택 (+,-,*,/): ");
    scanf(" %c", &p);
    switch (p) {
    case '+':
    printf("합은: %d\n", a+b);
    break;
    case '-':
    printf("차는: %d\n", a-b);
    break;
    case '*':
    printf("곱은: %d\n", a*b);
    break;
    case '/':
    if (b == 0) {
        printf("아오 0으로 어케 나눔!\n");
    }
    else {
        printf("몫은: %d\n", a/b);
    }
    break;
    default:
    printf("내가 기호 넣으라 했제?\n");
   }
   return 0;
}