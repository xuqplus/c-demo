#include <stdio.h>

enum Day {
    MON, TUE, WED = 10, THU, FRI, SAT, SUN,
};

void execEnum() {
    enum Day d;
    for (d = MON; d < SUN; d++) {
        printf("d=%d, ", d);
    }
    // d=0, d=1, d=2, d=3, d=4, d=5, d=6, d=7, d=8, d=9, d=10, d=11, d=12, d=13,
    // 聊胜于无???
}
