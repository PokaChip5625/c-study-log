#include <stdio.h>
int main() {
int a, b;
char p;
char quit;
while (1) {
    printf("첫 번째 정수: ");
    scanf("%d", &a);
printf("두 번째 정수: ");
scanf("%d", &b);
printf("연산 선택 (+,-,*,/): ");
scanf(" %c", &p);
printf("DEBUG p = %c\n", p);
 if (p == '+') {
    printf("합은: %d\n", a+b);
} else if (p == '-') {
    printf("차는: %d\n", a-b);
} else if (p == '*') {
    printf("곱은: %d\n", a*b);
} else if (p == '/') {
    if ( b == 0) {
        printf("0으로 어떻게 나눔 ㅋㅋ 오류임 ㅇㅇ\n");
    } else {
        printf("몫은: %d\n", a/b);
    }
    }
    else {
        printf("아 ㅋㅋ 저기 있는 기호를 넣으라고 ㅋㅋ%\n");
    }
    printf("\n");
    printf("종료하려면 q입력하셈 ㅋ: ");
scanf(" %c", &quit);
printf("DEBUG quit = [%c]\n", quit);
if (quit == 'q') {
    break;
}
}
return 0;
}