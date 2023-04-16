/*
4. O cardápio de uma lanchonete é o seguinte:

Especificação	Código	Preço
Cachorro quente	100	1,20
Bauru simples	101	1,30
Bauru com ovo	102	1,50
Hambúrger	103	1,20
Cheeseburguer	104	1,30
Refrigerante	105	1,00
*/
#include <stdio.h>
int main(){
    short qtd, codigo; 
    printf("Digite o código de um dos produtos\n\n Cachorro Quente: 100 \n Bauru Simples: 101 Bauru com ovo: 102\n Hambúrger: 103\n CheeseBurger: 104\n Refrigerante: 105 ");
    scanf("%hd", & codigo); 
    printf("Digite a quantidade comprada do produto: ");
    scanf("%hd", & qtd); 
    if(codigo == 100){
        print("O toal é R$ %hd", (1.20 * qtd));
    } else if(codigo == 101){
        print("O produto foi o 101 e o toal é R$ %hd", (1.30 * qtd));
    } else if(codigo == 102){
        print("O produto foi o 102 e o toal é R$ %f", (1.50 * qtd));
    } else if(codigo == 103){
        print("O produto foi o 103 e o toal é R$ %f", (1.20 * qtd));
    } else if(codigo == 104){
        print("O produto foi o 104 e o toal é R$ %f", (1.30 * qtd));
    } else if(codigo == 105){
        print("O produto foi o 105 e o toal é R$ %f", (1.00 * qtd));
    }else{
        printf("Código inválido"); 
    }
}