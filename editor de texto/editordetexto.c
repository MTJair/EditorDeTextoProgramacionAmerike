#include <stdio.h>
#include <string.h>

int main(){
    FILE*archivo;
    char nombre_del_archivo[100];
    char texto_interno[999];
    printf("Escribe el nombre para tu nuevo archivo de texto:");
    scanf("%[^\n]", nombre_del_archivo);
    strcat(nombre_del_archivo,".txt");

    archivo = fopen(nombre_del_archivo, "w");
    if (archivo != NULL) {
        printf("Archivo '%s' creado con exito.\n", nombre_del_archivo);
        
        printf("Introduce el texto dentro de tu archivo:\n");
        scanf(" %[^\n]", texto_interno);
        fprintf(archivo, "%s", texto_interno);
        printf("\nTu archivo se escribio correctamente.");
        fclose(archivo);
    } else {
        printf("Error al crear el archivo.\n");
    }

    return 0;
}   