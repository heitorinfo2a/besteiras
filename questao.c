#include <stdio.h>

int main() {

    int a, b, quociente, resto;
    
    printf("Informe o primeiro valor (dividendo): ");
    scanf("%d", &a);
    
    printf("Informe o segundo valor (divisor): ");
    scanf("%d", &b);
    
    if (b == 0) {
        printf("Impossível dividir por 0.\n");
    } else {
        quociente = a / b;
        resto = a % b;
        
        printf("Quociente: %d\n", quociente);
        printf("Resto: %d\n", resto);
    }

    return 0;
}
