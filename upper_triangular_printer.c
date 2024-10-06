#include <stdio.h>

int main() {
    int num_rows;
    scanf("%d", &num_rows);

    for (int current_row = 0; current_row < num_rows; current_row++) {
        for (int space = 0; space < current_row; space++) {
            printf(" ");
        }
        for (int star = 0; star < num_rows - current_row; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
