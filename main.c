#include <stdio.h>

void soma() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %f + %f = %f", a, b, a + b);
}

void subtracao() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %f - %f = %f", a, b, a - b);
    return;
}

void multiplicacao() {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %f * %f = %f", a, b, a * b);
    return;
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
    printf("Resultado: %f / %f = %f", a, b, a / b);
    return;
}

int main() {
    int answer;
    char continue_answer;
    while (1) {
        printf("===============================\n   Calculadora Simples\n===============================");
        printf("\n1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\nOpcao: ");
        scanf("%d", &answer);
        if (answer == 1) {
            soma();
        }
        else if (answer == 2) {
            subtracao();
        }
        else if (answer == 3) {
            multiplicacao();
        }
        else if (answer == 4) {
            divisao();
        }
        else if (answer == 5){
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            break;
        }
        else {
            printf("Resposta invalida, digite um valor correto na proxima vez");
            continue;
        }

        printf("\nDeseja realizar outra operação? (s/n): ");
        scanf(" %c", &continue_answer);
        if (continue_answer == 'n') {
            printf("Obrigado por usar a calculadora! Ate a proxima.");
            break;
        }
        
        else if (continue_answer != 's') {
            printf("Resposta invalida, digite um valor correto na proxima vez");
        }
    }
}