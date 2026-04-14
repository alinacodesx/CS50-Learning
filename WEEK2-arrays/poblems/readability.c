#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0, words = 1, sentences = 0;
    for (int i = 0, n = strlen(text); i <n; i++)
    {
        if (isalpha(text[i]))
        letters++;
        else if (text[i] == ' ')
        words++;
        else if (text[i] == '.' || text[i] == '!'|| text[i] == '?')
        sentences++;
    }

    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    printf("Before Grade 1\n");
    else if (index >= 16)
    printf("Grade %d\n", index);
    return 0;
}
