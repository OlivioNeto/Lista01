/*
1. Elaborar um algoritmo que lê 3 valores a,b,c e os escreve. A seguir, encontre o maior dos 3
 valores e o escreva com a mensagem : "É o maior "
*/

# include <stdio.h>
int main(){
    short a,b,c; 
    printf("Digite 3 valores: "); 
    scanf("%hd %hd %hd", &a, &b, &c);
    if(a > b && a>c){
        printf("O maior número é: %hd", a);
    } else if (b>c && b>c){
        printf("O maior número é: %hd", b);
    } else{
        printf("O maior número é: %hd", c); 
    }
}