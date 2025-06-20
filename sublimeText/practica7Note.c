#include <stdio.h>
#include <stdlib.h>

//funcion para ejercicio 5
int gcd(int numNume, int numDeno){
                if(numNume == 0){
                    return numDeno;
                }
                    
                if(numDeno == 0){
                     return numNume;
                }

                if (numNume == numDeno){
                    return numNume;
                }

                if(numNume > numDeno)
                    return gcd(numNume - numDeno, numDeno);
                return gcd(numNume, numDeno - numNume);
                    
            }

int main(){

     /*
    Rodrigo Casio García
    Ingeniería en sistemas y tecnologías de la información.
    3er Cuatrimestre
    Prof. Irving Edgar Mendoza Ayala
    Diseño y programación de estructura de software
    Universidad del Valle de Atemajac 
    Práctica 7 - Programa con FOR
    */

    //variable de ejercicio #1
    int puntoP = 0;
    int num3;
    int num4;

    //variables de ejercicio #2 
    int ast = 0;

    //variables de ejercicio #3
    int num1;
    int num2;
    char letra;

    //variables de ejercicio #4 
    int numCont1, numCont2, numCont3; 

    //variables de ejercicio #5 
    int numNume, numDeno;
    printf("\tBienvenido a la practica #7 de Rodrigo Casio\n");
    printf("\t--------------------------------------------");
    
    do{
        printf("\n\t1. Ejercicio\n");
        printf("\t2. Ejercicio\n");
        printf("\t3. Ejercicio\n");
        printf("\t4. Ejercicio\n");
        printf("\t5. Ejercicio\n");
        scanf("%d", &puntoP);

        if( puntoP > 5 || puntoP <= 0){
            printf("Opcion incorrecta, escoge un ejercicio (1-5)");
        }
    }
    while(puntoP > 5);
    

    switch(puntoP){
        case 1: 
            printf("Dame un valor: \n");
            scanf("%d", &num3);
            printf("Dame otro valor: \n");
            scanf("%d", &num4);

            if(num3 > num4){
                for(int i = num4; i < num3; i++){
                    printf ("%d", i);
                }
            }
            else if(num4 > num3){
                for(int i = num3; i < num4; i++){
                    printf("%d", i);
                }
            }
        break;

        case 2:

            printf("Cuantos asteriscos desea imprimir?\n");
            scanf("%d", &ast);

            for(int i = 0; i < ast; i++){
                printf("*");

            }
        break;

        case 3:

            printf("Dame un numero:\n");
            scanf("%d", &num1);
            printf("Dame otro numero:\n");
            scanf("%d", &num2);
            printf("Escoge \"i\" o \"p\": \n");
            scanf(" %c", &letra);

           if(num1 > num2){
                for(int i = num2; i < num1; i++){
                    if(letra == 'p'){
                        if(i % 2 == 0){
                        printf("%d ", i);
                        }
                    }
                    else if(letra == 'i'){
                        if(i % 2 != 0){
                            printf("%d ", i);
                        }
                    }
                    
                
                }
           }
           else if(num1 < num2){
                for(int i = num1; i < num2; i++){
                    if(letra == 'p'){
                        if(i % 2 == 0){
                            printf("%d ", i);
                        }
                    }
                    else if(letra == 'i'){
                        if(i % 2 != 0){
                            printf("%d ", i);
                        }
                    }
                
                }
           }
        break; 

        case 4:

        do {
            printf("Dame un numero:\n");
            scanf("%d", &numCont1);
            printf("Dame el numero que sigue del anterior:\n");
            scanf("%d", &numCont2);
            printf("Dame el numero que sigue del anterior de nuevo:\n"); 
            scanf("%d", &numCont3);

            if(numCont1 + 1 != numCont2 || numCont2 + 1 != numCont3){
                printf("Sigue las instrucciones porfavor:\n");
            }
        }
       //while(!(numCont1 < numCont2) && !(numCont2 < numCont3));
       // debe tener condición negativa a resultado que quiere llegar.
        while(numCont1 + 1 != numCont2 && numCont2 + 1 != numCont3);

            for(int i = numCont1; i < numCont2; i++){
                if(numCont1 + 1 == numCont2){
                    if(numCont2 + 1 == numCont3){
                        printf("gracias! :) ");
                    }
                }
            }
        break; 

        case 5:

            printf("Dame un número que sea el numerador de una división\n");
            scanf("%d", &numNume);
            printf("Dame un número que sea el denominador de la misma divisón\n");
            scanf("%d", &numDeno);

            //dividimos los valores introducidos entre el maximo comun denominador.
            printf("Simplificado: %d/%d", numNume / gcd(numNume, numDeno), numDeno / gcd(numNume, numDeno));
            

        //no me sale con for.
        /* for(int i, j = 1; i <= numNume && j <= numDeno; i++, j++){
                if(numNume % i == 0 && numDeno % j == 0){
                    gcdNume = i;
                    gcdDeno = j;

                    printf("%d/%d", numNume / gcdNume, numDeno / gcdDeno);
                }
                else{
                    continue;
                }
            }
        */
        break;
    }

    return 0;
}