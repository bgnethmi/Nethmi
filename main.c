#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 60


void generatePassword(char *pswd, int length) {

     const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";

 int charsetLength = sizeof(charset) - 1;

 srand(time(NULL));

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLength;
        pswd[i] = charset[index];
    }

    pswd[length] = '\0';
}







