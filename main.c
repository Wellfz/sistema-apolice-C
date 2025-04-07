#include <stdio.h>
#include <string.h>
#include <locale.h>


#define MAX_APOLICE 3

typedef union{
char endereco[100]; //Seguro residencial
char dataNascimento[11]; //Seguro de vida
struct {
    char marca[50];
    char modelo[50];
    int ano;
} automovel;
} DadosApolice;

typedef struct{
    char nome[50];
    char identidade[20];
    float valor;
    int tipo; //1 - residencial, 2 - vida, 3 - automovel
    DadosApolice dados;
} Apolice;

int main() {
setlocale(LC_ALL, "Portuguese");
Apolice apolices[MAX_APOLICE];

for(int i=0;i<MAX_APOLICE;i++){
    printf("Cadastro da %dº apolice\n", i+1);
    printf("Nome: ");
    scanf(" %[^\n]",apolices[i].nome);
    printf("Identidade: ");
    scanf(" %[^\n]",apolices[i].identidade);
    printf("Valor do seguro: ");
    scanf("%f",&apolices[i].valor);

    printf("Tipo do seguro (1-residencial,2-vida,3-automovel): ");
    scanf("%d",&apolices[i].tipo);
    getchar();
if(apolices[i].tipo == 1){
    printf("Digite seu endereço: ");
    scanf(" %[^\n]",apolices[i].dados.endereco);
}else if(apolices[i].tipo == 2){
    printf("Digite sua data de nascimento: ");
    scanf(" %[^\n]",apolices[i].dados.dataNascimento);
}else if(apolices[i].tipo == 3){
    printf("Digite a marca do automovel: ");
    scanf(" %[^\n]",apolices[i].dados.automovel.marca);
    printf("Digite o modelo do automovel: ");
    scanf(" %[^\n]",apolices[i].dados.automovel.modelo);
    printf("Digite o ano do automovel: ");
    scanf("%d",&apolices[i].dados.automovel.ano);
    }

}
for(int i=0;i<MAX_APOLICE;i++){
    printf("\nApólice %d:\n", i + 1);
    printf("Nome: %s\n", apolices[i].nome);
    printf("Identidade: %s\n", apolices[i].identidade);
    printf("Valor: %.2f\n", apolices[i].valor);

if(apolices[i].tipo == 1){
    printf("Endereço do imóvel: %s\n", apolices[i].dados.endereco);
}else if(apolices[i].tipo == 2){
    printf("Data de nascimento: %s\n", apolices[i].dados.dataNascimento);
}else if(apolices[i].tipo == 3){
    printf("Marca: %s\n", apolices[i].dados.automovel.marca);
    printf("Modelo: %s\n", apolices[i].dados.automovel.modelo);
    printf("Ano: %d\n", apolices[i].dados.automovel.ano);
}

}



return 0;
}
