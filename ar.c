#include <stdio.h>
float get_score_input(char* msg) {
    float result;
    float a;
    while (1) {
        printf("%s", msg);
        result = scanf(" %f", &a);
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
int main() {
    int fail_count = 0;
    float scores[5];
    int max_index = 0;

    float total = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d번째 학생 ", i + 1);
        scores[i] = get_score_input("점수 입력: ");

    }
    for (int i = 0; i < 5; i++) {
        total += scores[i];
    }
        float max = scores[0];
    float min = scores[0];
        for (int i = 0; i < 5; i++) {
        if (scores[i] > max) {
            max = scores[i];
            max_index = i;
        }
        if (scores[i] < min) {
            min = scores[i];
    
        }
        if (scores[i] < 60.0) {
            fail_count++;
        }
    }
    printf("총점: %.2f, 평균: %.2f\n", total, total / 5.0);
    printf("제일 큰 값은 %.2f이다.\n", max);
    printf("제일 높은 점수는 %d번째 학생이다.\n", max_index + 1);
    printf("제일 작은 값은 %.2f이다.\n", min);
    printf("과락자는 총 %d명 이다.", fail_count);

return 0;
}