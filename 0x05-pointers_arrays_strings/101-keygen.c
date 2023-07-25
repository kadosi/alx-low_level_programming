#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generate_random_char()
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	
	int index = rand() % (sizeof(charset) - 1);
	return charset[index];

}

int main()
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    int i;

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generate_random_char();
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}
