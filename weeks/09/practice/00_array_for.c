#include <stdio.h>

int main(void) {
    int car[5] = {2, 0, 3, 1, 0};
    car[2] = car[2] + 2;
    for (int i = 0; i < 5; i++) {
        printf("%d번 차: %d칸\n", i + 1, car[i]);
    }
    return 0;
}
