#include <stdio.h>

int potencia(int base, int exponente) {
    int resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}


int main() {
    int x, y, resultado,resultado2;
    char op;
    int valido = 1;
  
    printf("Ingrese operacion: \n");
    printf(" + : suma\n");
    printf(" - : resta\n");
    printf("* : operacion\n");
    printf("/ : division\n");
    printf("^ : potencia\n");
    printf(" m = modulo\n");
     printf("r = raiz cuadrada\n");
    scanf("%c", &op);
    printf("Ingrese x: ");
    scanf("%f", &x);
    printf("Ingrese y: ");
    scanf("%f", &y);

    switch (op) {
        case '+':
            resultado = x + y;
            break;
        case '-':
            resultado = x - y;
            break;
        case '*':
        case 'x':
            resultado = x * y;
            break;
        case '/':
            resultado = x / y;
            break;
        case '^':
            resultado = potencia(x, (int) y);
            break;
        case 'm':
            resultado = fmod (x,y);
            break;
        case 'r':
            resultado = sqrt(x);
            resultado2= sqrt(y);
            break;
            
        default:
            valido = 0;
    }
   printf("algo");
    if (valido)
        printf("El resultado es %f\n", resultado);
    
      if (op == "r")
         printf("El resultado es %f\n", resultado2);
         
    else
        printf("Operacion invalida\n");

   

    return 0;
    printf("Quieres seguir usandola");

}