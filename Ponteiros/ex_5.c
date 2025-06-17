#include <stdio.h>

int main() {
    int *p = 0x5DC; // ou até sem cast, dependendo do compilador
    printf("p = %p\n", p);
    p++;
    printf("p = %p\n", p);
    return 0;
}

