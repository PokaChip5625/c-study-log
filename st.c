#include <stdio.h>
int get_money_input(char* msg) {
int calc;
int result;
while (1) {
    printf("%s", msg);
    result = scanf("%d", &calc);
    if (result != 1 || calc <= 0) {
        printf("정수를 입력하세요.\n");
        while (getchar() != '\n');
        continue;
    }
    return calc;
}
}
int main() {
        for (int j = 0; j < 3; j++) {
    int count = 0;
    int party_sales[3][7];
    int result = 0;
    int max_index = 0;
    int min_index = 0;
    int party[3] = {0};
    char* days[] = {"월", "화", "수", "목", "금", "토", "일"};

        printf("%d번째 형님의 매출\n", j +1);
        for (int i = 0; i < 7; i++) {
        printf("%s요일 매출 입력: ", days[i]);
        party_sales[j][i] = get_money_input("");
        party[j] += party_sales[j][i];
    }
  int max = party_sales[0][0];
    int min = party_sales[0][0];
   
for (int i = 0; i < 7; i++) {
    if (party_sales[j][i] > max) {
        max = party_sales[j][i];
        max_index = i;
    }
    if (party_sales[j][i] < min) {
        min = party_sales[j][i];
        min_index = i;
    }
if (party_sales[j][i] <= party[j] / 7 ) {
count++;
}
}
printf("총 매출: %d원 평균 매출: %d원\n", party[j], party[j] / 7);
printf("가장 매출이 높은 요일은 %s요일로 %d원.\n", days[max_index], max);
printf("가장 매출이 낮은 요일은 %s요일로 %d원\n", days[min_index], min);
printf("평균 매출보다 낮은 요일은 총 %d개 입니다.\n", count);
        }
return 0;
}