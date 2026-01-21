#include <stdio.h>
#include <ctype.h>

void soma() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %f + %f = %f\n", a, b, a + b);
}

void subtracao() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %f - %f = %f\n", a, b, a - b);
}

void multiplicacao() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %f * %f = %f\n", a, b, a * b);
}

void divisao() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    if (b == 0) {
        printf("Erro: divisão por zero não é permitida.\n");
        return;
    }
    printf("Resultado: %f / %f = %f\n", a, b, a / b);
}

int main() {
    char answer;
    char continue_answer;
    int end_program = 0;
    while (1) {
        printf("===============================\n   Calculadora Simples\n===============================");
        printf("\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao: ");
        scanf(" %c", &answer);
        if (answer == '1') {
            soma();
        }
        else if (answer == '2') {
            subtracao();
        }
        else if (answer == '3') {
            multiplicacao();
        }
        else if (answer == '4') {
            divisao();
        }
        else if (answer == '5'){
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            break;
        }
        else {
            printf("Resposta invalida, digite um valor correto na proxima vez\n");
            continue;
        }
        while (1) {
            printf("\nDeseja realizar outra operação? (s/n): ");
            scanf(" %c", &continue_answer);
            if (toupper(continue_answer) == 'N') {
                printf("Obrigado por usar a calculadora! Ate a proxima.");
                end_program = 1;
                break;
            }
            else if (toupper(continue_answer) == 'S') {
                break;
            }
            else {
                printf("Resposta invalida, digite um valor correto na proxima vez\n");
            }
        }
        if (end_program != 0) {
            break;
        }
    }
}