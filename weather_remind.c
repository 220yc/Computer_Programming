#include <stdio.h>
int main() {
    int month, weather, temperature;
    printf("請輸入月份 (1-12)：");
    scanf("%d", &month);
    printf("%d\n", month); 
    printf("請輸入天氣 (1:晴天, 2:下雨, 3:下雪)：");
    scanf("%d", &weather);
    printf("%d\n", weather);
    printf("請輸入今日溫度：");
    scanf("%d", &temperature);
    printf("%d\n", temperature); 
    switch (month) {
        case 3: case 4: case 5:
            printf("\n春季\n");
            break;
        case 6: case 7: case 8:
            printf("\n夏季\n");
            break;
        case 9: case 10: case 11:
            printf("\n秋季\n");
            break;
        case 12: case 1: case 2:
            printf("\n冬季\n");
            break;
        default:
            printf("\n未知月份\n");
            return 1; // 結束程式
    }
    if (weather == 1) {
        printf("建議穿輕便服裝\n");
    } else if (weather == 2) {
        printf("建議攜帶雨具\n");
    } else if (weather == 3) {
        printf("天氣很冷\n");
    } else {
        printf("未知天氣\n");
        //return 1; // 結束程式
    }
    printf(temperature < 15 ? "注意保暖\n" : "溫度適中\n");
    return 0;
}