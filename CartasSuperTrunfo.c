#include <stdio.h>


int main() {

int Carta;
char Estado;
char Código[150];
char Cidade [150];
int População;
float Área;
float PIB;
int Pontos; 

printf("Digite o nome do Estado /n");
scanf("%s", &Estado);

printf("Digite o Código da carta /n");
scanf("%s", &Código);

printf("Digite a Cidade /n");
scanf("%s", &Cidade);

printf("Digite o tamanho da população /n");
scanf("%d",  &População);

printf("Digite o tamanho da Área em km² /n");
scanf("%f", &Área);

printf("Digite o PIB /n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos /n");
scanf("%d", &Pontos);

printf("Carta: n");
printf("Estado: %s /n", Estado  );
printf("Código da carta: %s /n", Código);
printf("Cidade: %s /n", Cidade);
printf("População: %d /n", População);
printf("Área(em km²): %f /n", Área);
printf("PIB: %f /n", PIB);
printf("Pontos Turísticos: %d /n", Pontos);

return 0;
}
