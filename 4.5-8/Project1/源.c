/*
第4章的编程练习8
*/
#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609
/* 使用define语句定义单位之间的换算比例 */
int main(void) {
    float range, oil;
    printf("Please input the range you traveled(in mile):");
    scanf("%f", &range);
    /* 以英里为单位读取旅行里程 */
    printf("Please input the oil you spend(in gallon):");
    scanf("%f", &oil);
    /* 以加仑为单位读取消耗的汽油 */
    printf("\nUSA, your oil wear is %.1f M/G\n", range / oil);
    /* 打印USA的耗油量 */
    printf("In Europe, your oil wear is %.1fL/100KM", (oil * GALLON_TO_LITRE * 100) / (range * MILE_TO_KM));
    /* 打印欧洲的耗油量 */
    return 0;
}