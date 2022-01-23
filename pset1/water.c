#include <stdio.h>
#include <cs50.h>

int main(void) {
    int waterminutes = get_int("How much time do you spend in the shower: ");

    int bottles = waterminutes*6*2;

    printf("Bottels: %d \n" , bottles);
}
