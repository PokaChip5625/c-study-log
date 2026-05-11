#include <stdio.h>
int main() {
    int map[5][5] = {0};
    int x = 0, y = 0;
    map[x][y] = 2;
    char move;
    while (1) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j ++) {
                if (map[i][j] == 2) {
                    printf("@ ");
                } else {
                    printf(". ");
                }
            }
        printf("\n");
        }
        printf("이동 방법(w,a,s,d): ");
        scanf(" %c", &move);
        if (move == 'q') 
            break;
        map[x][y] = 0;
        if (move == 'w' && x > 0) {
            x--;
        } else if (move == 's' && x > 0) {
            x++;
        } else if (move == 'a' && y > 0) {
            y--;
        } else if (move == 'd' && y < 4) {
            y++;
        }
    map[x][y] = 2;
    }
    return 0;
}