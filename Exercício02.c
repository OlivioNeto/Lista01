/*
2. Elaborar um algoritmo que lê 2 valores a e b e os escreve 
com a mensagem: "São múltiplos" ou "Não são múltiplos".
*/

#include <stdio.h>
int main (){
    short a,b;
    printf("Digite dois números: ");
    scanf("%hd &hd", & a, & b); 
    if(a % b == 0){
        printf("São Múltiplos"); 
    } else{
        printf("Não são Múltiplos");
    }
}