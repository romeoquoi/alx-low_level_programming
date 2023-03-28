#include <stdio.h>
#include <main.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void)
{
    // Seed the random number generator with the current time
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1] = {0};

    // Generate a random character for each position in the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        // Generate a random number between 0 and 3
        int r = rand() % 4;

        // Choose a random character based on the random number
        switch (r) {
            case 0:
                password[i] = 'a' + (rand() % 26);
                break;
            case 1:
                password[i] = 'A' + (rand() % 26);
                break;
            case 2:
                password[i] = '0' + (rand() % 10);
                break;
            case 3:
                password[i] = "!@#$%^&*()_+"[rand() % 14];
                break;
        }
    }

    // Print the generated password
    printf("%s\n", password);

    return 0;
}

