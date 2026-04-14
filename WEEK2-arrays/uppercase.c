#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        // If s[i] is lowercase
        if (s[i] >= 'a' && s[i] <= 'z')

        {
            printf("%c", s[i] - 32);
        }
    }
    printf("\n");
}
