#include<stdio.h>
int main() {
    char alph;
    printf("Enter an alphabet: ");
    scanf("%c", &alph);
    if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u' || alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U') {
        printf("%c is a vowel.\n", alph);
    } else {
        printf("%c is a consonant.\n", alph);
    }
    return 0;
}