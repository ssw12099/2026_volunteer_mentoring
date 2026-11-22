#include <stdio.h>

int main(void) {
    int car[5] = {2, 0, 3, 1, 0};
    printf("이동 거리: %d칸\n", car[2]);
    car[2] = car[2] + 2;
    printf("이동 거리: %d칸\n", car[2]);
    return 0;
}
