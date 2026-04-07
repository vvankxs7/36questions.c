#include <stdio.h>
int main() {
float largura, comprimento, area;
printf("Largura: ");
scanf("%f", &largura);
printf("Comprimento: ");
scanf("%f", &comprimento);
area = largura * comprimento;
printf("Area do terreno: %.2f\n", area);
return 0;
}
