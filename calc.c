#include <stdio.h>
int main() {
    int a,b;
    char p;
    int result;
    while (1) {
       printf("첫 번째 정수: ");
    int result =scanf("%d", &a);
    printf("DEBUG a값: %d\n", a);
       if (result != 1) {
        printf("숫자가 아니자나! 숫자 입력 ㄱㄱ\n");
        while (getchar() != '\n');
        continue;
       }
        break;
       }
    while (1) {
       printf("두 번째 정수: ");
    int result =scanf("%d", &b);
    printf("DEBUG b값: %d\n", b);
       if (result != 1) {
        printf("숫자가 아니자나! 숫자 입력 ㄱㄱ\n");
        while (getchar() != '\n');
        continue;
       }
        break;
       }
    printf("연산 선택 (+,-,*,/): ");
    scanf(" %c", &p);
    printf("DEBUG p값: %c\n", p);
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
            printf("0으로 어케나눔.\n");
        } else {
            printf("몫은: %d\n", a/b);
        }
        break;
        default:
        printf("연산자 입력 제대로 ㄱㄱ\n");
        }
        return 0;
    }
