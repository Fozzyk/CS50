#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int key = get_int("Enter the encryption key: ");

    //Key verification
    if (key<1 || key >25) {
        printf("Invalid key entered! \n");
        return 0;
    }

    string text = get_string("Enter the text you want to encrypt: ");

    //Encryption method
    int lenth = strlen(text);
    printf("Encrypted text: ");
    for (int i = 0; i < lenth; i++) {
        char ch = text[i];
        char encrypted_char;
        if (isupper(ch)) {
            encrypted_char = (char)((ch+key-65)%26+65);
        } else if (islower(ch)) {
            encrypted_char = (char)((ch+key-97)%26+97);
        } else if (isdigit(ch)) {
            encrypted_char = (char)((ch+key-48)%10+48);
        } else {
            encrypted_char = (char)(ch);
        }
        printf("%c", encrypted_char);
    }
}