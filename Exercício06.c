/*
6. Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente. 
O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, 
usando a tabela abaixo:

Código do Produto	Preço unitário
1001			5,32
1324			6,45
6548			2,37
0987			5,32
7623			6,45
*/

# include <stdio.h>
int main(){
    short qtd,codigo; 
    printf("Digite o codigo do produto: ");
    scanf("%hd", & codigo);
    printf("Digite a quantidade do produto: ");
    scanf("%hd", & qtd);
    if(codigo == 1001){
        print("O produto foi o 1001 e o toal é R$ %f", (5.32 * qtd));
    } else if(codigo == 1324){
        print("O produto foi o 1324 e o toal é R$ %f", (6.45 * qtd));
    } else if(codigo == 6548){
        print("O produto foi o 6548 e o toal é R$ %f", (2.37 * qtd));
    } else if(codigo == 0987){
        print("O produto foi o 0987 e o toal é R$ %f", (5.32 * qtd));
    } else if(codigo == 7623){
        print("O produto foi o 7623 e o toal é R$ %f", (6.45 * qtd));
    } else{
        printf("Código inválido"); 
    }
}