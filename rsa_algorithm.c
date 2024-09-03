#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int euler_function(int p, int q) {
    return (p-1)*(q-1);
}

void encrypt_message(char msg[]) {
    int p = 7;
    int q = 13;
    int public_exponent = 7;

    int modulus=p*q;

    for(int i = 0; i < strlen(msg); i++) {
        long long long_char = round(pow(msg[i], public_exponent));
        int encrypted_char = long_char % modulus;

        printf("%c", encrypted_char+40);
    }
    printf("\n");

}

int main() {
    char msg[] = "i have so much weed";
    encrypt_message(msg);
}
