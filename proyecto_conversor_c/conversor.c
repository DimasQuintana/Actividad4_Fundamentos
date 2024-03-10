#include <stdio.h>

#define us$_gtq 7.8
#define eur_gtq 8.54
#define us$_eur 0.91

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenidos al conversor de monedas.\n");
    printf("1. Quetzales a dólares.\n");
    printf("2. Quetzales a euros.\n");
    printf("3. Dólares a quetzales.\n");
    printf("4. Dólares a euros.\n");
    printf("5. Euros a quetzales.\n");
    printf("6. Euros a dólares.\n");
    printf("Ingrese la opción para el tipo de moneda que desea convertir: \n");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en quetzales:");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / us$_gtq);
            break;
        case 2:
            printf("Ingrese la cantidad en quetzales:");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / eur_gtq);
            break;
        case 3:
            printf("Ingrese la cantidad en dólares:");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * us$_gtq);
            break;
        case 4:
            printf("Ingrese la cantidad en dólares:");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f EUR\n", cantidad, cantidad * us$_eur);
            break;
        case 5:
            printf("Ingrese la cantidad en euros:");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * eur_gtq);
            break;
        case 6:
            printf("Ingrese la cantidad en euros:");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f USD\n", cantidad, cantidad / us$_eur);
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }

    return 0;
}
