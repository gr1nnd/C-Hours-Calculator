#include<stdio.h>

int main(){
    int horasTrabajas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajas por el empleado: ");
    scanf("%i", horasTrabajas);
    printf("Ingrese el pago por hora: ");
    scanf("%f", costoHora);
    sueldo=horasTrabajas*costoHora;
    printf("El sueldo total del operario es: ");
    printf("%f", sueldo);
    getchar;
    return 0;
}
