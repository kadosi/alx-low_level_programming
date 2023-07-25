#include <stdio.h>

#define PASSWORD_LENGTH 15

int main()
{
    char password[PASSWORD_LENGTH + 1] = "Tada! Congrats"; // +1 for the null terminator

    printf("%s\n", password);

    return 0;
}

