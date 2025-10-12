#include <stdio.h>
int main() 
{
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("Alphabet\n");
    else if(c >= '0' && c <= '9')
        printf("Digit\n");
    else
        printf("Special character\n");

}
