#include <stdio.h>

int coin_check(double total, float coin_val, double user_input);

int main(void) {

    double total = 0.0, user_amt;
    int coins = 0;

    printf("Why hello there! How much change do you need?\n");
    scanf("%lf", &user_amt);
    while (total != user_amt) {
        if (coin_check(total, 0.25, user_amt)) {
            total += 0.25;
            coins++;
        } else if (coin_check(total, 0.10, user_amt)) {
            total += 0.10;
            coins++;
        } else if (coin_check(total, 0.05, user_amt)) {
            total += 0.05;
            coins++;
        } else if (coin_check(total, 0.01, user_amt)) {
            total += 0.01;
            coins++;
        } else {
            break;
        }
    }

    printf("%i\n", coins);
}

int coin_check(double total, float coin_val, double user_input) {
    if (total + coin_val <= user_input) {
        return 1;
    } else {
        return 0;
    }
}