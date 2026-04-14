#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");  // added space after colon
    printf("%zu\n", strlen(name));       // %zu for size_t
}
