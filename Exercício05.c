/*
5. Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino e ?F? feminino), construa um 
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

- para homens: (72.7*h)-58

- para mulheres: (62.1*h)-44.7
*/

# include <stdio.h>
int main(){
    float altura; 
    short sexo; 
    printf("Digite seu sexo, 1 se for feminino e 2 se for masculino: "); 
    scanf("%hd", & sexo); 
    printf("Digite sua altura: "); 
    scanf("%f", & altura); 
    if (sexo == 1){
        printf("Seu peso ideal é de: %f", (62.1 * altura) - 44.7); 
    }else {
        printf("Seu peso ideal é de: %f", (72.7 * altura) - 58); 
    }
}