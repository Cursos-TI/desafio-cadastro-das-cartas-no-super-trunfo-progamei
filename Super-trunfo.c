#include <stdio.h>
 
int main() {
    int populacao;
    int numero_de_pontos_turisticos;
    float area;
    float pib;
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao);
    printf("Quantos pontos turísticos tem na cidade?\n");  
    scanf("%d", &numero_de_pontos_turisticos);  
    printf("Qual a área da cidade em km²?\n");  
    scanf("%f", &area);
    printf("Qual o PIB da cidade?\n");
    scanf("%f", &pib);
    printf("População %d\n", populacao);
    printf("Pontos túristicos: %d\n", numero_de_pontos_turisticos);
    printf ("Area: %.2f km²\n", area);
    printf("PIB: R$%.2f",pib);
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n", idade);
    
    return 0;
}
