#include <stdio.h>
int main() {
    int map[5][5] = {0};
    int row, col;
    int count = 0;
    while (1) {
        printf("종료하고 싶으면 -1 -1을 입력\n");
        printf("행을 입력하세여 (1-5): ");
        scanf("%d", &row);
        printf("열을 입력하세여 (1-5): ");
        scanf("%d", &col);
        if (row == -1 && col == -1) {
            break;
        }
        if (row <= 0 || col >= 6 || row >= 6 || col <= 0) {
    printf("1이상 5이하의 정수를 입력하세요.\n");
    while (getchar() != '\n');
    continue;
   }
   map[row - 1][col -1] = 1;
    }
    
    printf("지도 상태: \n");
    
    for(int i = 0; i <5; i++) {
        for(int j = 0; j < 5; j++) {
        if (map[i ][j] == 1) {
            printf("# ");
            count++;
        } else if (j > 0 && map[i][j-1] == 1 || j < 4 && map[i][j+1] == 1 || i < 4 &&map[i+1][j] == 1 || i > 0 &&map[i-1][j] == 1) {
            printf("! ");
        } else {
            printf(". ");
        }
            }
            printf("\n");
        }
        

printf("# 개수: %d\n", count);
            
            return 0;
        }