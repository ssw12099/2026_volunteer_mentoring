#include <stdio.h>
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
    printf("%d번 차, %d칸에서 출발!\n", choice, car[mine]);
    return 0;
}
