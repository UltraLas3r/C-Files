#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_PASSWORDS 10
#define PASSWORD_LENGTH 8
#define MAX_ATTEMPTS 5

void generate_passwords(char passwords[NUM_PASSWORDS][PASSWORD_LENGTH + 1], char *correct_password) {
    const char *possible_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    int num_possible_chars = strlen(possible_chars);

    srand(time(NULL));
    for (int i = 0; i < NUM_PASSWORDS; i++) {
        for (int j = 0; j < PASSWORD_LENGTH; j++) {
            passwords[i][j] = possible_chars[rand() % num_possible_chars];
        }
        passwords[i][PASSWORD_LENGTH] = '\0';
    }

    // Select a random password as the correct password
    strcpy(correct_password, passwords[rand() % NUM_PASSWORDS]);
}

int count_matching_characters(const char *guess, const char *correct_password) {
    int count = 0;
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        if (guess[i] == correct_password[i]) {
            count++;
        }
    }
    return count;
}

void display_passwords(const char passwords[NUM_PASSWORDS][PASSWORD_LENGTH + 1]) {
    printf("Possible passwords:\n");
    for (int i = 0; i < NUM_PASSWORDS; i++) {
        printf("%s\n", passwords[i]);
    }
}

int main() {
    char passwords[NUM_PASSWORDS][PASSWORD_LENGTH + 1];
    char correct_password[PASSWORD_LENGTH + 1];
    char guess[PASSWORD_LENGTH + 1];
    int attempts_left = MAX_ATTEMPTS;
    int match_count;

    generate_passwords(passwords, correct_password);

    while (attempts_left > 0) {
        display_passwords(passwords);
        printf("Attempts left: %d\n", attempts_left);
        printf("Enter your guess: ");
        scanf("%s", guess);

        if (strcmp(guess, correct_password) == 0) {
            printf("Access granted!\n");
            return 0;
        } else {
            match_count = count_matching_characters(guess, correct_password);
            printf("Access denied. %d/%d correct characters.\n", match_count, PASSWORD_LENGTH);
            attempts_left--;
        }
    }

    printf("You are locked out.\n");
    printf("The correct password was: %s\n", correct_password);

    return 0;
}
