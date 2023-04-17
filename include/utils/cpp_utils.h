#ifndef PROGRAM_UTILS
#define PROGRAM_UTILS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

#define PROGRAM_DESCRIPTION(x) 1
/* 打印的DEBUG 开关 关掉把define 改成undef 如果需要打印文件名，加上，"File: "__FILE__ */
/* 1，可以考虑写指定文件 2，设置日志开关，日志级别 */
#define __DEBUG__  
#ifdef __DEBUG__  
#define PROGRAM_INFO_LOG(format,...) printf(""format"", ##__VA_ARGS__)
#else  
#define PROGRAM_INFO_LOG(format,...)  
#endif

#define PROGRAM_OK 0
#define PROGRAM_ERR -1
#define PROGRAM_TRUE 1
#define PROGRAM_FALSE 0

/* 获取阶乘结果 */
int Algorithm_Get_Gactorial(int value);

#endif