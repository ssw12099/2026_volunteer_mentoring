#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int car[5] = {0};
    int choice = 0;
    printf("=== 부스터 레이스 ===\n");
    printf("3라운드 뒤 8칸 이상이면 성공!\n");
    printf("자동차를 골라요 (1~5)\n");
    scanf("%d", &choice);
    if (choice < 1) return 0;
    if (choice > 5) return 0;
    int mine = choice - 1;
    srand((unsigned)time(NULL)); // 멘토 제공
    for (int round = 1; round <= 3; round++) {
        for (int i = 0; i < 5; i++) {
            int move = rand() % 3 + 1; // 멘토 제공
            car[i] = car[i] + move;
        }
        printf("%d라운드:", round);
        for (int i = 0; i < 5; i++)
            printf(" %d번=%d", i + 1, car[i]);
        printf("\n");
    }
    printf("내 차: %d칸\n", car[mine]);
    return 0;
}
