#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    string key = get_string("Enter the encryption key: ");
    string text = get_string("Enter the text you want to encrypt: ");

    //Shift
    int k;
    //Counter for the key
    int ki = 0;

    int lenth = strlen(text);
    for (int i = 0; i < lenth; i++) {
        char encrypted_char;
        char ch = text[i];
        k = (tolower(key[ki % strlen(key)]) - 97) % 26;

        if (isupper(ch)) {
            encrypted_char = (char)((ch+k-65)%26+65);
            ki++;
        } else if (islower(ch)) {
            encrypted_char = (char)((ch+k-97)%26+97);
            ki++;
        } else if (isdigit(ch)) {
            encrypted_char = (char)((ch+k-48)%10+48);
            ki++;
        } else {
            encrypted_char = (char)(ch);
        }
        printf("%c", encrypted_char);
    }
    printf("\n");
}