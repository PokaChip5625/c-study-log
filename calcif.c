#include <stdio.h>
float get_score_input(char* msg) {
    float result;
    float a;
    while (1) {
        printf("%s", msg);
        result = scanf("%f", &a);
if (result != 1 || a <= 0) {
    printf("정수를 입력하세요.\n");
     while (getchar() != '\n');
     continue;
}else if (a > 100) {
    printf("넌 수능 1과목 당 100점 넘니?\n");
       while (getchar() != '\n');
       continue;
} else { 
    return a;

    }

}
}

float avg1(float kk, float ee, float mm) {
    return (kk + ee + mm) / 3.0;
}
int main() {
    float k,e,m;
    float avg = 0;
    k = get_score_input("국어 점수: ");
    e = get_score_input("영어 점수: ");
    m = get_score_input("수학 점수: ");
     avg = avg1(k, e, m);
    printf("평균은: %f\n",avg);
    if (avg >= 90) {
        printf("A\n");
    } else if (avg >= 80) {
        printf("B\n");
    } else {
        printf("F\n");
    }
    return 0;
}