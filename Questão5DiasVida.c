#include<stdio.h>
int main() {
int idade, dias_vida;
    printf("Salve, Professor Agbeson! Aqui e meu programa.\n");
    printf("Digite a idade do prof: ");
    scanf("%d", &idade);
        dias_vida = idade * 365;
    printf("Agbeson ja viveu pouco mais de %d dias. Aprova eu, Agbeson!\n", dias_vida);
    return 0;
}
