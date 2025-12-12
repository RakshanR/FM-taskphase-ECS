#include <stdio.h>
#include <string.h>
int main() {
    char pwd[20];
    char correct_pwd[] = "rakshan";
    int attempts = 3;
    while (attempts > 0) {
        printf("Enter password: ");
        scanf("%s", pwd);
        if (strcmp(pwd, correct_pwd) == 0) {
            printf("Login successful\n");
            return 0;
        } else {
            attempts--;
            printf("Incorrect password\n");
        }
    }
    printf("Too many failed attempts\n");

    return 0;
}

