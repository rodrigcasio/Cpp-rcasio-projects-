
#include <stdio.h>
#include <math.h>
/*
    Rodrigo Casio García
    Ingeniería en sistemas y tecnologías de la información.
    3er Cuatrimestre
    Prof. Irving Edgar Mendoza Ayala
    Diseño y programación de estructura de software
    Universidad del Valle de Atemajac 
    Práctica 8 - Funciones.
*/

//funciones de areas. 
int rectanguloArea(int, int);
int cuadradoArea(int);
int trianguloArea(int, int);
float circuloArea(float);
int paralelogramoArea(int, int);
int trapecioArea(int, int, int);
float elipseArea(float, float);
int romboArea(int, int);


//funciones de volumenes. 
void cuboVol(int);
void prismaVol(int, int, int);
void cilindroVol(float, int);
void esferaVol(float);
void piramidVol(int, int);
void conoVol(float, int);
void tetraedroVol(float);
void prismaTriangularVol(int, int, int);



int main() {
    
    int tipoOpera = 0;
    int tipoFiguraArea = 0;
    int tipoFiguraVolumen = 0;
    
    //variables de figuras para Areas:
    int altura, base, lado, baseMayor, baseMenor, diagonal1, diagonal2;
    float radio, radioMayor, radioMenor;
    //resultados
    int area, volumen; float areaDecimal;
    // variables de logitudes para Volumenes:
    int longitudA, longitudL;
    
    
    printf("\tBienvenido a la practica #8 de Rodrigo Casio\n");
    printf("\t--------------------------------------------\n");
    printf("¿Que tipo de operación quieres realizar?\n");
    
    do{
        printf("\n\t1. Área de figuras geométricas.\n");
        printf("\t2. Volumen de figuras geométricas.\n");
        scanf("%d", &tipoOpera);
        
        if(tipoOpera > 2 || tipoOpera <= 0){
            printf("Opcion incorrecta, escoge un tipo de operación! (1-2)\n");
        }
    }
    while(tipoOpera > 2);
    
    switch(tipoOpera){
        
        case 1:  //switch de tipo de operación Área.
        
                printf("Escoge las figura que quieras obtener el área:\n");
            do{
                printf("\t1. Rectangulo\n");
                printf("\t2. Cuadrado\n");
                printf("\t3. Triángulo\n");
                printf("\t4. Círculo\n");
                printf("\t5. Paralelogramo\n");
                printf("\t6. Trapecio\n");
                printf("\t7. Elipse\n");
                printf("\t8. Rombo\n");
                scanf("%d", &tipoFiguraArea);
                
                if(tipoFiguraArea > 8 || tipoFiguraArea <=0 ){
                    printf("Opción incorrecta, escoge un tipo de figura (1-8)!\n");
                    }
                }
            while(tipoFiguraArea > 8);
        
                        //switch de tipo de figura.
                        switch(tipoFiguraArea){
                            case 1: //rectangulo 
                                printf("\t*Sacar el area de un Rectangulo\n");
                                printf("\nIntroduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                printf("Introduce el valor de su base:\n");
                                scanf("%d", &base);

                                area = rectanguloArea(altura, base); //funcion
                                printf("El area del rectangulo es de: %d", area);
                            break;
                            
                            case 2: // cuadrado
                                printf("\t*Sacar el area de un Cuadrado*\n");
                                printf("\nIntroduce el valor de un lado\n");
                                scanf("%d", &lado);
                                area = cuadradoArea(lado); //funcion
                                printf("El area del cuadrado es de: %d", area);
                            break;
                            
                            case 3: // triángulo
                                printf("\t*Obtener el area de un Triangulo*\n");
                                printf("\nIntroduce el valor de su base:\n");
                                scanf("%d", &base);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                area = trianguloArea(base, altura); //funcion
                                printf("El area del triangulo es de: %d\n", area);
                            break;
                            
                            case 4: // circulo
                                printf("\t*Obtener el area de un Circulo*\n");
                                printf("\nIntroduce el valor de su radio\n");
                                scanf("%f", &radio);
                                areaDecimal = circuloArea(radio); //funcion
                                printf("El area del circulo es de: %.2f", areaDecimal);
                            break;
                            
                            case 5: //Paralelogramo
                                printf("\t*Obtener el area de un Paralelogramo*\n");
                                printf("\nIntroduce el valor de su base:\n");
                                scanf("%d", &base);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                area = paralelogramoArea(base, altura); //funcion
                                printf("El area del Paralelogramo es de: %d", area);
                            break;
                            
                            case 6: //Trapecio
                                printf("\t*Obtener el area de un Trapecio*\n");
                                printf("\nIntroduce el valor de su base mayor:\n");
                                scanf("%d", &baseMayor);
                                printf("Introduce el valor de su base menor:\n");
                                scanf("%d", &baseMenor);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);

                                area = trapecioArea(baseMayor, baseMenor, altura); //funcion
                                printf("El area del Trapecio es de: %d", area);
                            break;
                            
                            case 7: //Elipse
                                printf("\t*Obtener el area de un Elipse*\n");
                                printf("\nIntroduce el valor de radio mayor:\n");
                                scanf("%f", &radioMayor);
                                printf("Introduce el valor del radio menor:\n");
                                scanf("%f", &radioMenor);
                                areaDecimal = elipseArea(radioMayor, radioMenor); //funcion
                                printf("El area del Elipse es de: %.2f", areaDecimal);
                            break;
                            
                            case 8: //Rombo
                                printf("\t*Obtener el area de un Rombo*\n");
                                printf("\nIntroduce el valor de su primer diagonal:\n");
                                scanf("%d", &diagonal1);
                                printf("Introduce el valor de su segunda diagonal:\n");
                                scanf("%d", &diagonal2);
                                area = romboArea(diagonal1, diagonal2);
                                printf("El area del Rombo es de: %d", area); 
                            break;
                        }
        break;
        
        case 2: //Switch tipo de operación Volumenes. 
                printf("Escoge la figura que quieres sacar el volumen:\n");
            do{
                printf("\t1. Cubo\n");
                printf("\t2. Prisma\n");
                printf("\t3. Cilindro\n");
                printf("\t4. Esfera\n");
                printf("\t5. Pirámide\n");
                printf("\t6. Cono\n");
                printf("\t7. Tetraedro\n"); //primera vez que escucho esta figura 
                printf("\t8. Prisma Triangular\n");
                scanf("%d", &tipoFiguraVolumen);
                
                    if(tipoFiguraVolumen > 8 || tipoFiguraVolumen <= 0){
                        printf("Opción inorrecta, escoge un tipo de figura (1-8)!\n");
                    }
                }
            while(tipoFiguraVolumen > 8);
                
                        switch(tipoFiguraVolumen){
                            case 1: //Cubo
                                printf("\t*Obtener el volumen de un Cubo*");
                                printf("\nIntroduce la longitud del cubo:\n");
                                scanf("%d", &longitudA);
                                cuboVol(longitudA);//funcion
                            break;
                            
                            case 2: //Prisma
                                printf("\t*Obtener el volumen de un Prisma\n*");
                                printf("\nIntroduce el valor de la longitud:\n");
                                scanf("%d", &longitudL);
                                printf("Introduce el valor de su base:\n");
                                scanf("%d", &base);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                prismaVol(longitudL, base, altura); //funcion
                            break;
                            
                            case 3: //Cilindro
                                printf("\t*Obtener el volumen de un Cilindro*\n");
                                printf("\nIntroduce el valor de su radio:\n");
                                scanf("%f", &radio);
                                printf("Introduce el valor de su altura\n");
                                scanf("%d", &altura);
                                cilindroVol(radio, altura); //funcion
                            break;
                            
                            case 4: // Esfera
                                printf("\t*Obtener el volumen de una Esfera*\n");
                                printf("\nIntroduce el valor de su radio:");
                                scanf("%f", &radio);
                                esferaVol(radio);
                            break;
                            
                            case 5: // Pirámide 
                                printf("\t*Obtener el volumen de una Piramide\n*");
                                printf("\nIntroduce el valor de su longitud:\n");
                                scanf("%d", &longitudL);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                piramidVol(longitudL, altura);
                            break;
                            
                            case 6: // Cono
                                printf("\t*Obtener el volumen de un Cono*\n");
                                printf("\nIntroduce el valor de su radio:\n");
                                scanf("%f", &radio);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                conoVol(radio, altura);
                            break;
                            
                            case 7: // Tertaedro
                                printf("\t*Obtener el volumen de un Tetraedron*\n");
                                printf("\nIntroduce el valor de su longitud:\n");
                                scanf("%d", &longitudA);
                                tetraedroVol(longitudA);
                            break;
                            
                            case 8: // Prisma Triangular 
                                printf("\t*Obtener el volumen de un Prisma Triangular*\n");
                                printf("\nIntroduce el valor de su longitud:\n");
                                scanf("%d", &longitudA);
                                printf("Introduce el valor de sus base:\n");
                                scanf("%d", &base);
                                printf("Introduce el valor de su altura:\n");
                                scanf("%d", &altura);
                                prismaTriangularVol(longitudA, base, altura);
                            break;
                            
                }
    }
    
    return 0;
}

//funciones de areas. 
int rectanguloArea(int a, int b){
    return(a * b); // base * altura
}

int cuadradoArea(int a){
    return(pow(a, 2)); // lado ^2
}

int trianguloArea(int a, int b){
    return((a * b)/ 2); // (base * altura) / 2
}

float circuloArea(float a){
    const float pi = 3.1415;
    return(pi*pow(a,2)); // pi * radio^2
}

int paralelogramoArea(int a, int b){
    return(a * b);
}

int trapecioArea(int a, int b, int c){
    return((a + b) * c / 2);
}

float elipseArea(float a, float b){
    const float pi = 3.1415;
    return(pi * a * b);
}

int romboArea(int a, int b){
    return((a * b) / 2);
}


//funciones de volumenes. 
void cuboVol(int a){
    a = pow(a,3);
    printf("El volumen del Cubo es de: %d", a);
}

void prismaVol(int a, int b, int c){
    printf("El volumen del Prisma es de: %d", a * b * c);
}

void cilindroVol(float a, int b){
    const float pi = 3.1415;
    printf("El volumen del Cilindro es de: %.2f", pi * pow(a,2) * b);
}

void esferaVol(float a){
    float fract = 1.33333;
    const float pi = 3.1415;
    printf("El volumen de la Esfera es de: %.2f", fract * pi * pow(a,3));
}

void piramidVol(int a, int b){
    float fract = 0.33333;
    printf("El volumen de la piramide es de: %.2f", fract * pow(a,2) * b);
}

void conoVol(float a, int b){
    float fract = 0.33333;
    const float pi = 3.1415;
    printf("El volumen del Cono es de: %.2f", fract * pi * pow(a,2) * b);
}

void tetraedroVol(float a){
    printf("El volumen del Tetraedro es de: %.2f", (sqrt(2) * pow(a,3)) / 12); // o tambien pow(a,3) / (6 * sqrt(2).
}

void prismaTriangularVol(int a, int b, int c){
    float fract = 0.5;
    printf("El volumen del Prisma Triangular es de: %.2f", fract * a * b * c);
}
