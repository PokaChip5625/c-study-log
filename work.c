#include <stdio.h>
int get_money_input(char* msg) {
    int result;
    int hour;
    while (1) {
    printf("%s", msg);
    result = scanf("%d", &hour);
    if (result != 1 || hour <= 0) {
        printf("잘못된 입력, 0 이상의 숫자를 입력해 주세요./n");
        while (getchar() != '\n');
continue;
    }
return hour;
    }
}
int select_menu() {
    int r;
    printf("계산을 선택하세요.\n");
    printf("1. 일급 2. 주급 3. 월급");
    printf("숫자로 입력: ");
    scanf("%d", &r);
    return r;
}
int main() {
    int hr, pay, week, r;
    int total = 0;
    hr = get_money_input("근무 시간을 입력하세요.: ");
    pay = get_money_input("시급을 입력하세요.: ");
    week = get_money_input("주당 근무 일수를 입력하세요.: ");
    r = select_menu();
  switch(r) {
case 1: 
total = hr * pay;
printf("최종 일급: %d", total);
break;
case 2: 
total = hr * pay * week;
printf("최종 주급: %d", total);
break;
case 3:
total = hr * pay * week * 4;
printf("최종 월급: %d", total);
break;
default :
printf("오류! 알맞은 계산을 적어주세요.\n");
  }
   return 0;
}