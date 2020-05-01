//  Calculadora de operações básicas

#include <stdlib.h>
#include <stdio.h>

int main (){
    int valor1, valor2, resultado;                 //Declaração de variavel

    char operacao;

    printf("Digite o primeiro numero: ");          //Pedindo ao usuario o primeiro numero
    scanf("%d", &valor1);
    setbuf(stdin, NULL);

    printf("\nQual operacao vai ser usada(+ - / *): ");         //A operação que sera usada
    scanf("%c", &operacao);
    setbuf(stdin, NULL);

    printf("\nDigite o segundo numero: ");         //Pedindo o segundo numero
    scanf("%d", &valor2);
    setbuf(stdin, NULL);


    if (operacao == '+'){
        resultado = valor1 + valor2;
        }
    else if (operacao == '-'){
        resultado = valor1 - valor2;
        }
    else if (operacao == '*'){
        resultado = valor1 * valor2;
    }
    else if (operacao == '/'){
        resultado = valor1 / valor2;
    }
    else{
        printf("\nOperacao invalida");
        setbuf(stdin, NULL);
    }

    printf("\nO resultado da operacao foi: %d", resultado);
    scanf("%d", &resultado);
    setbuf(stdin, NULL);

    return 0;

}
