#include <stdio.h>
int get_money_input(char* msg) {
     int price;
     int result;
    while (1) {
        printf("%s", msg);
        result = scanf("%d", &price);
        if (result != 1 || price <= 0) {
        printf("잘못된 입력, 0 이상의 숫자를 입력해 주세요.\n");
        while (getchar() != '\n');
        }
        return price;
    }
}
int calc_diff(int start, int sales, int actual) {
    int end = start + sales;
      return end - actual;
}
       int main() {
int st,sa,ac;
st = get_money_input("시작 가격 입력: ");
sa = get_money_input("판매 가격 입력: ");
ac = get_money_input("현재 가격 입력: ");
int diff = calc_diff(st, sa, ac);
printf("\n결과: %d원 차이가 납니다.\n",diff);
return 0;



       }