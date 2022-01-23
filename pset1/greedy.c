#include <stdio.h>
#include <cs50.h>

int main(void) {
    int change;

    //Checking the input number
    do {
        change = (int)(get_float("O hai! How much change is owed?\n") * 100);
    } while (change < 0);

    int count = 0;
    int TwentyFiveCents = 0;
    int TenCents = 0;
    int FiveCents = 0;
    int OneCent = 0;

    //Distribution algorithm
    while (change > 0) {
        while (change - 25 >= 0) {
            change -= 25;
            count++;
            TwentyFiveCents++;
        }
        while (change - 10 >= 0) {
            change -= 10;
            count++;
            TenCents++;
        }
        while (change - 5 >= 0) {
            change -= 5;
            count++;
            FiveCents++;
        }
        while (change - 1 >= 0) {
            change -= 1;
            count++;
            OneCent++;
        }
    }

    printf("Coins: %d \n25 Cents: %d \n10 Cents: %d \n5  Cents: %d \n1  Cent:  %d \n" , count , TwentyFiveCents , TenCents , FiveCents , OneCent);
}