#include <stdio.h>
#include <stdlib.h>

int euler_function(int p, int q) {
    return (p-1)*(q-1);
}

int create_public_key() {
    int p, q, public_exponent, modulus;
    p = 7;
    q = 13;
    
    modulus=p*q;

    return 0;
}

int main() {

}
