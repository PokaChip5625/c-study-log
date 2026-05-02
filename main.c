#include <stdio.h>
int main() {
    int a,b;
    printf("첫 번째 정수: \n");
    scanf("%d",&a);
    printf("DEBUG a값: %d\n", a);
    if (a % 2==0) {
    printf("짝수구만..\n");
    } else {
        printf("홀수구만..\n");
    }
printf("두 번째 정수: ");
scanf("%d",&b);
printf("%d와 %d의 합은?\n",a,b);
printf("%d이다.\n",a+b);
printf("%d와 %d의 차는?\n",a,b);
    printf("%d이다.\n",a-b);
    printf("%d와 %d의 곱은?\n",a,b);
    printf("%d이다.\n",a*b);
    printf("%d와 %d의 나눗셈은?\n",a,b);
    printf("%d이다.\n",a/b);


    return 0;
}
