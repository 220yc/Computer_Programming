#include <stdio.h>

int main() {
    int c = 85, e = 92, m = 100;
    int t = c + e + m;  
    float av = (c + e + m) / 3.0;  
    float wav = (c * 2 + e * 2 + m * 1) / 5.0;  
    char g;  

    if ((av >= 90) && (av <= 100)) {
        g = 'A';
    } else if ((av >= 80) && (av < 90)) {
        g = 'B';
    } else if ((av >= 70) && (av < 80)) {
        g = 'C';
    } else if ((av >= 60) && (av < 70)) {
        g = 'D';
    } else {
        g = 'F';
    }

    printf("Chinese: %d\nEnglish: %d\nMath: %d\n", c, e, m);
    printf("Total: %d\n", t);
    printf("Average: %.2f\n", av);
    printf("W-Average: %.2f\n", wav);
    printf("Grade: %c\n", g);  // 使用 %c 輸出字符

    return 0;
}