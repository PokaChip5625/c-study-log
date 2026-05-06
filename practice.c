#include <stdio.h>
int get_total_price() {
    while (1) {
        int price;
        printf("물건 가격입력: ");
        int result = scanf("%d", &price);
        if (result !=1) {
            printf("숫자를 입력해 주세요.\n");
            while (getchar() != '\n');
            continue;
        }
        return price;
    }
}

char inputchar() {
    char op;
    while (1) {
        printf("연산자 입력 (+, -, *, /): \n");
        scanf(" %c", &op);
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            return op;
        } else {
            printf("연산자는 제대로!\n");
        }

    }
}
int get_total_count() {
    while (1) {
        int count;
        printf("물건 개수입력: ");
        int result = scanf("%d", &count);
        if (result !=1) {
            printf("숫자를 입력해 주세요.\n");
            while (getchar() != '\n');
            continue;
        }
        return count;
    } 
}
int total(int a, int b, char op) {
    int sum = a + b;
   switch (op) {
        case '+' : return a + b;
        case '-' : return a - b;
        case '*' : return a * b;
        case '/' : 
        if (b == 0) {
            printf("0은 못 나눠.\n");
            return 0;
        }
        return a / b;
        default:
        printf("연산자 제대로 해야지!\n"); 
        return 0;


    }
}
void price_total(int final_sum, int point) {
    printf("최종 가격: %d\n",final_sum);
    printf("포인트 적립: %d\n",point);
}
int main() {
    int p, c;
    char op;
    int point; 
    int final_sum = 0;
    while (1){
printf("포인트는 5만원 이상 구매 시 3%, 종료를 원하시면 가격에 0을 입력하세용.\n");
    p = get_total_price();
    if (p == 0) break;
    c = get_total_count();
    op = inputchar();
    int sum = total(p, c, '*');
    final_sum += sum;
    printf("현재 총 가격은 %d원 입니다.\n", final_sum);
    }
    if (final_sum >= 50000) {
        point = (int)(final_sum * 0.03);
    } else {
        point = (int)(final_sum * 0.01);
    }
    price_total(final_sum, point);
    return 0;
}
