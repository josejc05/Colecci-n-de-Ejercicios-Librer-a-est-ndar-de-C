#include <string.h>
#include <stdio.h>

int main() {
    char str[] = "Hola mundo";
    int length = strlen(str);
    printf("La longitud de '%s' es: %d\n", str, length);
    return 0;
}