#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int results[n];

    for (int i = 0; i < n; i++) {
        int budget, people, city_id;
        scanf("%d %d %d", &budget, &people, &city_id);

        // 檢查 city_id 是否輸入正確
        if (city_id < 0 || city_id > 7) {
            results[i] = -2;
            continue;
        }

        int flight_price, daily_cost;
        float exchange_rate;

        // 每個城市有不同費⽤設定，使用 switch 來設定
        switch (city_id) {
            case 0: // Tokyo
                flight_price = 15000;
                exchange_rate = 4.0;
                daily_cost = 15000;
                break;
            case 1: // Seoul
                flight_price = 10000;
                exchange_rate = 40.0;
                daily_cost = 60000;
                break;
            case 2: // Bangkok
                flight_price = 12000;
                exchange_rate = 1.1;
                daily_cost = 2000;
                break;
            case 3: // London
                flight_price = 35000;
                exchange_rate = 0.025;
                daily_cost = 200;
                break;
            case 4: // Paris
                flight_price = 33000;
                exchange_rate = 0.03;
                daily_cost = 180;
                break;
            case 5: // New York
                flight_price = 40000;
                exchange_rate = 0.032;
                daily_cost = 220;
                break;
            case 6: // Sydney
                flight_price = 32000;
                exchange_rate = 0.048;
                daily_cost = 250;
                break;
            case 7: // Taipei
                flight_price = 0;
                exchange_rate = 1.0;
                daily_cost = 3000;
                break;
            default:
                results[i] = -2; // 若輸入的⾸都選項的值不在 0 到 7 之間，則輸出-2
                continue;
        }

        // 計算機票總共價格
        int total_flight_cost = flight_price * people;

        // 若輸入的預算不⾜以⽀付所有⼈的機票，則輸出-1
        if (budget < total_flight_cost) {
            results[i] = -1;
            continue;
        }

        // 扣掉機票後剩餘的預算
        int remaining_budget = budget - total_flight_cost;

        // 以當地貨幣計算每日花費
        float remaining_budget_exchanged = remaining_budget * exchange_rate;

        // 檢查剩餘預算是否足夠支付每日花費
        if (remaining_budget_exchanged < daily_cost) {
            results[i] = 0;
            continue;
        }

        // 計算能夠負擔的天數
        int days = remaining_budget_exchanged / ((int)daily_cost * people);
        results[i] = days;
    }

    // 輸出結果
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", results[i]);
    }
    printf("\n");

    return 0;
}
