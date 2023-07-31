#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 60

// Function to generate a random password

void generatePassword(char *pswd, int length) {

//characters to be used in the password
     const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";

 int charsetLength = sizeof(charset) - 1;
//Seed the random number generator

 srand(time(NULL));

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLength;
        pswd[i] = charset[index];
    }

    pswd[length] = '\0';
}

int main() {
    int length;

    printf("Password Generator\n");
    printf("Enter the desired length of the password: ");
    scanf("%d", &length);

    if (length <= 0 || length > MAX_PASSWORD_LENGTH) {
        printf("Invalid password length. Please choose a length between 1 and %d.\n", MAX_PASSWORD_LENGTH);
        return 1;
    }

    char pswd[MAX_PASSWORD_LENGTH + 1];
    generatePassword(pswd, length);

    printf("Generated Password: %s\n", pswd);

    return 0;
}








