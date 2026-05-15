#include <stdio.h>
#include <stdlib.h>
struct mana_exp
{
    int Obsession;
    int Liberation;
    int Passion;
    int Calm;
};
struct player
{
    int x, y;
    int hp;
    char icon;
    int alive;
    int attack;
    int inventory[10];
    int itemcount;
    int gold;
    int bb;
    struct mana_exp aa;
};
struct monster
{
    int x, y;
    int hp;
    char icon;
    int alive;
    int attack; 
};
int main()
{
    struct player p = {0, 0, 100, '@', 1, 20, {0}, 0, 0};
    struct monster s = {4, 4, 50, 'M', 1, 14};
    int map[6][6] = {0};
    p.x = 0;
    p.y = 0;
    map[p.x][p.y] = 2;
    map[1][1] = 1;
    map[2][2] = 7;
    map[3][3] = 1;
    map[5][5] = 3;
    map[0][5] = 4;
    map[4][5] = 5;
    map[5][2] = 6;
    char move;

    void select_1(struct player * P)
    {
        if (P->bb == 0)
        {
            int choose;
            printf("세계가 너를 부른다...\n");
            printf("1. 집착 - 몬스터에게 강한 타격을 줄 수 있지만, 앞이 흐려질 것이다.\n");
            printf("2. 해방 - 남의 앞길을 밝힌자 자신의 앞길도 밝으리.\n");
            printf("3. 격정 - 너가 먹고 마시는 모든 것은 곧 너의 힘이된다.\n");
            printf("4. 고요 - 몬스터와의 소통을 중시 하는 너는 위기 상황을 모면할 수 있다.\n");
            printf("성향을 선택하라...: \n");
            scanf("%d", &choose);
            if (choose == 1)
            {
                P->aa.Obsession = 10;
                P->attack = 30;
                P->bb = 1;
                printf("[집착] 너의 선택에 후회는 없기를..\n");
            }
            else if (choose == 2)
            {
                P->aa.Liberation = 10;
                P->bb = 1;
                printf("[해방] 너의 선택에 후회는 없기를..\n");
            }
            else if (choose == 3)
            {
                P->aa.Passion = 10;
                P->bb = 1;
                printf("[격정] 너의 선택에 후회는 없기를..\n");
            }
            else if (choose == 4)
            {
                P->aa.Calm = 10;
                P->bb = 1;
                printf("[고요] 너의 선택에 후회는 없기를..\n");
            }
        }
    }
    while (1)
    {
        printf("현재 HP: %d, GOLD: %d, 포션 %d개\n", p.hp, p.gold, p.inventory[0]);
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                int dist = abs(p.x - i) + abs(p.y - j);
                int view;
                if (p.aa.Obsession == 10)
                {
                    view = 1;
                }
                else if (p.aa.Liberation == 10)
                {
                    view = 4;
                }
                else 
                { 
                    view = 2;
                }
                if (dist <= view) {
                    if (map[i][j] == 2)
                    {
                        printf("%c ", p.icon);
                    }
                    else if (map[i][j] == 1)
                    {
                        printf("# ");
                    }
                    else if (map[i][j] == 3)
                    {
                        printf("E ");
                    }
                    else if (map[i][j] == 4)
                    {
                        printf(" %c", s.icon);
                    }
                    else if (map[i][j] == 5)
                    {
                        printf("G ");
                    }
                    else if (map[i][j] == 6)
                    {
                        printf("P ");
                    }
                    else if (map[i][j] == 7)
                    {
                        printf("S ");
                    }
                
                    else
                    {
                        printf(". ");
                    }
                }
                    else
                    {
                        printf("? ");
                    }
                
            }
            printf("\n");
        }
        printf("이동 방법(w,a,s,d): ");
        scanf(" %c", &move);
        if (move == 'q')
        {
            break;
        }

        int nx = p.x, ny = p.y;
        if (move == 'w' && p.x > 0)
        {
            nx--;
        }
        else if (move == 's' && p.x < 5)
        {
            nx++;
        }
        else if (move == 'a' && p.y > 0)
        {
            ny--;
        }
        else if (move == 'd' && p.y < 5)
        {
            ny++;
        }
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
    printf("몬스터에게 마주쳤습니다!\n");
    printf("전투 시작!\n");
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
} else if (target == 7) {
    int choice = 0;
   
    printf("상점에 도착했습니다. 현재 내 골드: %d\n", p.gold);
     while (choice != 3) {
printf("1. 포션 구매, 2. 무기 강화 3. 나가기 [숫자 입력]: \n");
int bug = scanf(" %d", &choice);
if (bug == 0) {
    printf("알맞은 숫자를 입력해라.\n");
        if (target == 1)
        {
            printf("벽에 막혔습니다!\n");
        }
        else if (target == 3)
        {
            printf("탈출 성공! 축하합니다!\n");
            printf("엔터를 누르면 종료합니다...");
            getchar();
            getchar();
            return 0;
        }
        else if (target == 4)
        {
            printf("몬스터에게 마주쳤습니다!\n");
            printf("전투 시작!\n");
            s.hp -= p.attack;
            printf("몬스터 체력: %d\n", s.hp);
            if (s.alive == 1 && s.hp <= 0)
            {
                printf("몬스터 처치!\n");
                s.alive = 0;
                map[nx][ny] = 0;
            }
            else
            {
                p.hp -= s.attack;
                if (p.hp <= 0)
                {
                    printf("You died..\n");
                    return 0;
                }
            }
        }
        else if (target == 5)
        {
            printf("골드를 획득!\n");
            p.gold += 100;
            map[nx][ny] = 0;
        }
        else if (target == 6)
        {
            if (p.inventory[0] < 9)
            {
                printf("흔한 포션을 하나 획득!\n");
                p.inventory[0]++;
                map[nx][ny] = 0;
            }
            else
            {
                printf("가방이 가득 찼습니다!\n");
            }
        }
        else if (target == 7)
        {
            int choice = 0;

            printf("상점에 도착했습니다. 현재 내 골드: %d\n", p.gold);
            while (choice != 3)
            {
                printf("1. 포션 구매, 2. 무기 강화 3. 나가기 [숫자 입력]: \n");
                int bug = scanf(" %d", &choice);
                if (bug == 0)
                {
                    printf("알맞은 숫자를 입력해라.\n");
                    while (getchar() != '\n')
                        ;
                    continue;
                }
                if (choice == 1 && p.gold >= 50)
                {
                    p.inventory[0]++;
                    p.gold -= 50;
                    printf("흔한 포션 1개 구입.\n");
                }
                else if (choice == 1 && p.gold <= 49)
                {
                    printf("골드가 %d 부족하다.\n", 50 - p.gold);
                }
                else if (choice == 2 && p.gold >= 100)
                {
                    p.attack += 10;
                    printf("공격력 10 상승!\n");
                }
                else if (choice == 2 && p.gold <= 100)
                {
                    printf("골드가 %d 부족하다.\n", 100 - p.gold);
                }
                else if (choice == 3)
                {
                }
            }
        }
        else
        {
            map[p.x][p.y] = 0;
            p.x = nx;
            p.y = ny;
            map[p.x][p.y] = 2;
        }
    }
    return 0;
}