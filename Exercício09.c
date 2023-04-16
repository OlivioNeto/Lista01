/*
9. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a 
expressa apenas em dias
*/ 

#include <stdio.h>
int main(){
    short ano, mes, dia; 
    printf("Digite sua idade em anos");
    scanf("%hd", & ano);
    printf("Digite sua idade em meses");
    scanf("%hd", & mes);
    printf("Digite sua idade em dias");
    scanf("%hd", & dia);
    printf("Sua idade em dias é igual a: %hd", (ano*365 + mes * 30) + dia);
} 