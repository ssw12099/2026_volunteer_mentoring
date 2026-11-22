#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int car[5] = {0};
    int choice;
    puts("=== 부스터 레이스 ===");
    puts("3라운드 뒤 8칸 이상이면 성공!\n자동차를 골라요 (1~5)");
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 5) {
        puts("1~5 사이의 숫자를 입력해요.");
        return 0;
    }
    int mine = choice - 1;
    srand((unsigned)time(NULL));
    for (int round = 1; round <= 3; round++) {
        for (int i = 0; i < 5; i++) {
            int move = rand() % 3 + 1;
            car[i] = car[i] + move;
        }
        printf("%d라운드:", round);
        for (int i = 0; i < 5; i++)
            printf(" %d번=%d", i + 1, car[i]);
        puts("");
    }
    printf("내 차: %d칸\n", car[mine]);
    return 0;
}
