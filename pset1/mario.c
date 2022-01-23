#include <stdio.h>
#include <cs50.h>

int main(void) {
    int height = get_int("Set the height (min:0 ; max23): ");

    //Checking the input data
    while (height < 0 || height >23){
        printf("You give wrong height \n");
        height = get_int("Give height (min:0 ; max23): ");
     }

    //Construction algorithm
    for (int level = 1; level <= height; level++) {
        for (int width = 1; width <= height + 1; width++) {
            if (width < height - level+1) {
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}