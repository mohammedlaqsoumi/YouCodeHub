#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractère : ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c >= 'a' && c <= 'z') {
            printf("%c est une lettre minuscule.\n", c);
        } 
        else {
            printf("%c est une lettre majuscule.\n", c);
        }
    } 
    else {
        printf("error !! \n");
    }

    return 0;
}
