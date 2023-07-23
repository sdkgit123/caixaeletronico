#include<stdio.h>
#include<stdlib.h>
#define MAX 600

int main(){
    int quantos;
    int i;
    int um = 0;
    int cinco = 0;
    int dez = 0;
    int cinc = 0;
    int cem = 0;
    printf("Quantos reais voce que sacar?:\n");
    scanf("%d", &quantos);
    while(quantos>MAX || quantos<1){
        printf("Saque nao permitido.\n");
        printf("Quantos reais voce que sacar?:\n");
        scanf("%d", &quantos);
    }
    while(quantos>=1){
        if(quantos-100 >= 0){
            cem++;
            quantos = quantos - 100;
        } else if (quantos - 50 >= 0){
            cinc++;
            quantos = quantos - 50;
        } else if (quantos - 10 >= 0){
            dez++;
            quantos = quantos - 10;
        } else if (quantos-5 >= 0){
            cinco++;
            quantos = quantos - 5;
        } else if (quantos - 1 >= 0){
            um++;
            quantos = quantos - 1;
        }
    }
    printf("O valor que voce quer sacar sera dado em:\n");
    printf("%d notas de 100 reais\n", cem);
    printf("%d notas de 50 reais\n", cinc);
    printf("%d notas de 10 reais\n", dez);
    printf("%d notas de 5 reais\n", cinco);
    printf("%d notas de 1 real\n", um);
    return 0;
}