#include <stdio.h>

//isabel passamani 

typedef struct{
    int x;
    int y;
}tCoordenadas;

typedef struct{
    tCoordenadas coordenadas;
    int raio;
}tCirculo;

tCirculo defineCirculo(){
    tCirculo circulo;
    scanf("%d %d %d" ,&circulo.coordenadas.x ,&circulo.coordenadas.y ,&circulo.raio);
    return circulo;
}

float calculaDistanciaEntreCentros(tCirculo circuloA, tCirculo circuloB){
    float distancia, diferencaDeCoordenadas;

    diferencaDeCoordenadas = (circuloA.coordenadas.x - circuloB.coordenadas.x) + (circuloA.coordenadas.y - circuloB.coordenadas.y);
    distancia = sqrt(diferencaDeCoordenadas, 2);

    return distancia;
}

int circulosAeBSeIntersectam(tCirculo circuloA, tCirculo circuloB, float distancia){
    return (distancia <= (circuloA.raio + circuloB.raio));
}

int circuloAemB(tCirculo circuloA, tCirculo circuloB, float distancia){
    return (distancia <= (circuloB.raio - circuloA.raio));
}

int circuloBemA(tCirculo circuloA, tCirculo circuloB, float distancia){
    return (distancia <= circuloA.raio - circuloB.raio); 
}

int main(){
    tCirculo circuloA,
             circuloB;   
    float distancia;
    
    circuloA = defineCirculo();
    circuloB = defineCirculo();
    
    distancia = calculaDistanciaEntreCentros(circuloA, circuloB);


    if (circulosAeBSeIntersectam(circuloA, circuloB, distancia) || circuloAemB(circuloA, circuloB, distancia) 
        || circuloBemA(circuloA, circuloB, distancia)){
        printf("Circulos se intersectam");
    }
    else{
        printf("Circulos nao se intersectam");
    }
    
}