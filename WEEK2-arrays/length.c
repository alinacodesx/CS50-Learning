#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("name");
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n",n);
}
// to find the length the string basically act as a len function that we use in python 
// A string is basically a set of array
