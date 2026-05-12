#include <stdio.h>
struct player {
    int x, y;
    int hp;
    char icon;
    int alive;
    int attack;
    int inventory[10];
    int itemcount;
    int gold;
};
struct monster {
    int x, y;
    int hp;
    char icon;
    int alive;
    int attack;
};
int main() {
    struct player p = {0, 0, 100, '@', 1, 20, {0}, 0};
    struct monster s = {4, 4, 50, 'M', 1, 14};
    int map[6][6] = {0};
    p.x = 0;
    p.y = 0;
    map[p.x][p.y] = 2;
    map[1][1] = 1; 
map[2][2] = 1;
map[3][3] = 1;
map[5][5] = 3;
map[0][5] = 4;
map[4][5] = 5;
map[5][2] = 6;
    char move;
       
    while (1) {
        printf("현재 HP: %d, GOLD: %d, 포션 %d개\n", p.hp, p.gold, p.inventory[0]);
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j ++) {
                if (map[i][j] == 2) {
                    printf("%c ", p.icon);
                } else if (map[i][j] == 1) {
                    printf("# ");
                } else if (map[i][j] == 3) {
                    printf("E ");
                } else if (map[i][j] == 4) {
                    printf(" %c", s.icon);
                } else if (map[i][j] == 5) {
                    printf("G ");
                } else if (map[i][j] == 6) {
                    printf("P ");
                }
                else {
                    printf(". ");
                }
            }
        printf("\n");
        }
        printf("이동 방법(w,a,s,d): ");
        scanf(" %c", &move);
        if (move == 'q') {
break;
        }
            
        
        int nx = p.x, ny = p.y;
        if (move == 'w' && p.x > 0) {
            nx--;  
        } else if (move == 's' && p.x < 5) {
            nx++;
        } else if (move == 'a' && p.y > 0) {
            ny--;
        } else if (move == 'd' && p.y < 5) {
            ny++;
        } else if (move == 'h') {
            if (p.inventory[0] > 0) {
                printf("포션을 사용했다. HP +20\n");
                p.hp +=20;
                if (p.hp > 100) p.hp = 100;
                p.inventory[0]--;
} else {
    printf("사용할 포션이 없다.\n");
}
continue;
        }
int target = map[nx][ny];

if (target == 1) {
    printf("벽에 막혔습니다!\n");
} 
else if (target == 3) {
    printf("탈출 성공! 축하합니다!\n");
     printf("엔터를 누르면 종료합니다...");
    getchar();
    getchar();
    return 0;
} 
else if (target == 4) {
    printf("몬스터에게 마주했습니다!\n");
    s.hp -=p.attack;
    printf("몬스터 체력: %d\n", s.hp);
if (s.alive == 1 && s.hp <= 0) {
    printf("몬스터 처치!\n");
    s.alive = 0;
    map[nx][ny] = 0;
} else {
    p.hp -= s.attack;
    if (p.hp <= 0) {
        printf("You died..\n");
        return 0;
    }
}
} else if (target == 5) {
    printf("골드를 획득!\n");
    p.gold += 100;
    map[nx][ny] = 0;
} else if (target == 6) {
    if (p.inventory[0] < 9) {
         printf("흔한 포션을 하나 획득!\n");
        p.inventory[0]++;
    map[nx][ny] = 0;
    } else {
        printf("가방이 가득 찼습니다!\n");
    }
}
else {
    map[p.x][p.y] = 0;
    p.x = nx;
    p.y = ny;
    map[p.x][p.y] = 2;
}
    }
    return 0;
}