#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }
    fprintf(file, "Hola, mundo!\n");
    fclose(file);
    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }
    char buffer[50];
    fscanf(file, "%s", buffer);
    printf("Leído del archivo: %s\n", buffer);
    fclose(file);
    return 0;
}