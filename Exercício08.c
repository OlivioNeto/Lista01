/*
8. Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e 
mostre-os em ordem decrescente.
*/

# include <stdio.h>
int main(){
    short a,b,c; 
    printf("Digite 3 valores: "); 
    scanf("%hd %hd %hd", &a, &b, &c);
    if(a < b && b<c){
        printf("O ordem crescente é: %hd %hd %hd", a, b, c);
    } else if (b<c && c<a){
        printf("O ordem crescente é: %hd %hd %hd", b, c, a);
    } else{
        printf("O ordem crescente é: %hd %hd %hd", c, b, a); 
    }
}