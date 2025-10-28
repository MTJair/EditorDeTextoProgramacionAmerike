#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const char *lista[] = {"Bruno", "Gael", "Brayan", "Carlos", "Jair"};
    int n = sizeof(lista) / sizeof(lista[0]);

    srand(time(NULL));

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        const char *temp = lista[i];
        lista[i] = lista[j];
        lista[j] = temp;
    }

    printf("Lista barajada: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", *lista[i]);
    }
    printf("\n");

    return 0;
}
