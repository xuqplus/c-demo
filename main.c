#include <stdio.h>
#include "day00/f.c"
#include "day01/f.c"
#include "day02/f.c"
#include "day02/day02-for.c"
#include "day02/day02-variable-define.c"

// 函数声明
void exexWhile();

extern int staticVariable;

int main() {
//    f();
//    floatPrint();
//    print();
//    execWhile();
//    execFor();

    staticVariable = 99; // 静态变量值被修改

    variableDefine(1, 2);
    printf("result=%d, ", variableDefine(1, 2));
    return 0;
}