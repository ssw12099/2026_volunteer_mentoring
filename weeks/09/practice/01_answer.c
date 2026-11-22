#include <stdio.h>
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
    printf("%d번 차, %d칸에서 출발!\n", choice, car[mine]);
    return 0;
}
