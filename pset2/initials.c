#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    string name = get_string("Please enter your first and second name: ");
    
    //Output of the first letter of the name
    printf("%c",toupper(name[0]));
    
    //Output of the first letter of the surname
     for (int i=0; i<strlen(name); i++) {
        if (name[i]==' ') {
            printf("%c",toupper(name[i+1]));
        }
    }
    printf("\n");
}