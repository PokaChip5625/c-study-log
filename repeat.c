#include <stdio.h>
int main() {
    int a,b;
    char p;
    for (int i = 1; i<4; i++) {
        printf("%d\n", i);
    
    printf("첫 번째 정수: ");
    scanf("%d", &a);
    printf("두 번째 정수: ");
    scanf("%d", &b);
    printf("연산 선택 (+,-*,/): ");
    scanf(" %c", &p);
   if (p == '+') {
    printf("합은: %d\n", a+b);
   } else if (p == '-') {
    printf("차는: %d\n", a-b);
   } else if (p == '*') {
    printf("곱은: %d\n", a*b);
   } else if (p == '/') {
    if (b == 0) {
        printf("0으로 나눌 수 없음\n");
    } else {
        printf("몫은: %d\n", a/b);
    }
} else {
    printf("기호를 넣어야제..\n");
}
    } 
return 0;
}


