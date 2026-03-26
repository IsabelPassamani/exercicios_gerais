#include <stdio.h>
#define MAX_LINHAS 100

typedef struct 
{
    int nLinhas;
    int nColunas;
}tTriangulo;

tTriangulo defineLinhasEColunas(){
    tTriangulo triangulo;
    scanf("%d" ,&triangulo.nLinhas);
    triangulo.nColunas = triangulo.nLinhas;
    return triangulo;
}

void imprimeTriangulo(tTriangulo triangulo){
    int i, cont = 0,
        j = 0;
    
    for (i = 1; i <= triangulo.nLinhas; i++){
        for (j = 0; j < i; j++){
            cont += 1;
            printf("%d " ,cont);
        }
        printf("\n");
    }
}

int main(){
    tTriangulo triangulo;
    triangulo = defineLinhasEColunas();
    imprimeTriangulo(triangulo);
}