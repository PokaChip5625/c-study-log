#include <stdio.h>
    int inputint() {
        int x;
    while (1) {
      int result = scanf("%d", &x);
        if (result != 1) {
            printf("친구, 알지? 숫자. \n");
            while (getchar() != '\n');
            continue;
        }
return x;
}
}
char inputchar() {
    char p;
    while (1) {
        printf("연산 선택 (+,-,*,/): ");
     scanf(" %c", &p);
        if (p == '+' || p == '-' || p == '*' || p == '/' ) {
            return p;
        } else {
            printf("please input +, -, *, /.\n");

        }
        } 
    }

  int calc(int a, int b, char op) {
switch (op) {
    case '+' : return a + b;
    case '-' : return a - b;
    case '*' : return a * b;
    case '/' :
    if (b == 0) {
        printf("0으로 못 나눠!\n");
        return 0;
    }
    return a/b;
    default:
    printf("연산자 제대로 입력해야제..\n");
    return 0;

}

    }
int main() {
    int a,b;
    char op;
    printf("첫 번째 정수: ");
    a = inputint();
    printf("두 번째 정수: ");
    b = inputint();
    op = inputchar();
    int result = calc(a, b, op);
    printf("결과: %d\n", result);
    return 0;
}