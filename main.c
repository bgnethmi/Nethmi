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







