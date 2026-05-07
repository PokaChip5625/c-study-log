#include <stdio.h>
int get_money_input(char* msg) {
    int money;
    int result;
    while (1) {
    printf("%s", msg);
    result = scanf("%d", &money);
    if (result !=1 || money <= 0) {
        printf("어이, 너. 정수를 입력해라.\n");
        while (getchar() != '\n');
        continue;

    }
    return money;
}
}
int calc(int pr, int rc) {
    return pr - rc;
}
int main() {
    int price;
    int received;
    int result = 0;
    while (1) {
    price = get_money_input("상품 금액을 입력하세요: \n");
    received = get_money_input("상품 금액에 맞춰 결제를 해주세요: \n");
result = calc(price, received);
if (result > 0) {
    printf("동작그만. 밑장빼기냐? %d원 부족임. 다시 금액에 맞춰 결제 고. 환불해줌.\n",result );
    while (getchar() != '\n');
    continue;
} else if (result <= 0) {
printf ("거스름돈은 %d원 입니다.\n", result);
return result;
break;
}
}

}