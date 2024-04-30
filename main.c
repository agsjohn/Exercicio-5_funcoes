#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
int vet[TAM];

int gerapar (int limite);
int geraimpar (int limite);

main(){
    int limite, x;
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    printf("Digite o limite do gerador: ");
    scanf("%i", &limite);
    getchar();
    gerapar(limite);
    geraimpar(limite);
    printf("Vetor gerado: ");
    for(x = 0; x < TAM; x++){
        if(x == TAM - 1){
          printf("%i\n", vet[x]);
        }
        else{
          printf("%i - ", vet[x]);
        }
    }
    getchar();
}

int gerapar (int limite){
    int x;
    for(x = 0; x <= 4; x++){
        do{
            vet[x] = rand() % limite;
        }while(vet[x] % 2 != 0);
    }
}
int geraimpar (int limite){
    int x;
    for(x = 5; x < TAM; x++){
        do{
            vet[x] = rand() % limite;
        }while(vet[x] % 2 == 0);
    }
}
