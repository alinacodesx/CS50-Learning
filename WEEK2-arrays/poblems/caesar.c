#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }

    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int k = atoi(argv[1]);

    string plain = get_string("plaintext:  ");

    printf("ciphertext: ");
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        printf("%c", rotate(plain[i], k));
    }
    printf("\n");
    return 0;
}
bool only_digits(string s)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (!isdigit(s[i]))
            return false;
    }
    return true;
}

char rotate(char c, int k)
{
    if (isupper(c))
        return (char) ((c - 'A' + k) % 26 + 'A');
    else if (islower(c))
        return (char) ((c - 'a' + k) % 26 + 'a');
    else
        return c;
}
