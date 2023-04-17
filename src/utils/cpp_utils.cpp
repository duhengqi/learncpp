#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "cpp_utils.h"

/* 获取阶乘结果 */
int Algorithm_Get_Gactorial(int value)
{
    if (value < 2) {
        return 1;
    }
    int result = 1;
    for (int loop = 1; loop <= value; loop++ ) {
        result *= loop;
    }
    return result;
}