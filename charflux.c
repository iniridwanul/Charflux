#include <stdio.h>

void encrypt(char *password);

int main() {
    char password[50];
    printf("Password: ");
    scanf("%s", &password);
    encrypt(password);
    return 0;
}

void encrypt(char *password) {
    for(short index = 0; password[index] != '\0'; index++) {
        password[index] = password[index] + 1;
    }
    printf("🔒 Encrypted Password: %s\n", password);
}