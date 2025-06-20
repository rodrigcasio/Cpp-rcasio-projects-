/*
    Rodrigo Casio García
    Ingeniería en sistemas y tecnologías de la información.
    3er Cuatrimestre
    Prof. Irving Edgar Mendoza Ayala
    Diseño y programación de estructura de software
    Universidad del Valle de Atemajac 
    Práctica 9 - Struct (Escuela).
*/
#include <stdio.h>
#include <stdlib.h>
#define numReg 20
int respReg; //respuesta de usuario de # de registros.

//prototipos de funciones:
void impresionNombreApe(int);
void impresionPromedio(int);
void impresionBoleto(void);

//estructura de registro 
 struct alumno{
    char nombreAl[25];
    char apellidoAl[25];
    int edadAl;
    int anioAl;
    int notaAl[4];
    float promedioAl;
}registro[numReg]; 



int main(){
    
   //declaración de variables 
   int i, respAccion, acum = 0;
   int acumArray[20]; // lista de enteros totales de notas.
   
   // intento: int cantidadNotas = sizeof(alumno.notaAl)/sizeof(alumno.notaAl[0]);


   printf("\tBienvenido a la practica #9 de Rodrigo Casio\n");
   printf("\t--------------------------------------------\n");
   
   printf("Cuantos registro de alumn@s necesitas?\n");
   
   do{
       printf("(Escribe el numero de registros que requieras):\n");
       scanf("%d", &respReg);
       
       if(respReg > numReg || respReg <= 0){
           printf("Escoge (1-20) numero de registros\n");
       }
   }
   while(respReg > numReg);

    //multiplicar el numero de registros de datos personales:
    for(int i = 0; i < respReg; i++){
        //registro[i].promedioAl = 0;
        printf("\t-------------------------\n");
        printf("\tInformación del Alumn@ # %d\n", i + 1);
        printf("Ingrese el nombre del alumn@:\n");
        scanf("%s", &registro[i].nombreAl);
        printf("Ingrese el apellido del alumn@:\n");
        scanf("%s", &registro[i].apellidoAl);
        printf("Ingrese la edad del alumn@:\n");
        scanf("%d", &registro[i].edadAl);
        printf("Ingrese el año que cursa:\n");
        scanf("%d", &registro[i].anioAl);
    }
    //multiplicar el numero notas:
    for(int i = 0; i < respReg; i++){
        printf("\n\t-------------------------------");
        printf("\n\tNotas del alumn@ #%d \"%s %s\" \n", i + 1, registro[i].nombreAl, registro[i].apellidoAl);
        for(int j = 0; j < 4; j++){
            printf("Ingrese la nota #%d:", j + 1);
            scanf("%d", &registro->notaAl[j]);
            acumArray[i] = acumArray[i] + registro->notaAl[j]; //almacenar total de valores.
            registro[i].promedioAl = (float) acumArray[i] / 4;
        }
    }
    
    //opciones de usuario de funciones:
    printf("\n\tQué te gustaria realizar con los registros?:\n");
    do{
        printf("\n\t1. Información de alumnos registrados(Nombre y Apellido).\n");
        printf("\t2. Promedios de alumnos.\n");
        printf("\t3. Boleto de un alumn@.\n");
        scanf("%d", &respAccion);
        
        if(respAccion > 3 || respAccion <= 0){
            printf("Escoge las funciones que se muestran (1-3)\n");
        }
    }
    while(respAccion > 3);
    
        //switch de acciones disponibles:
        switch(respAccion){
            case 1://funcion1
                impresionNombreApe(respReg);
            break;
            case 2://funcion2
                impresionPromedio(respReg);
            break;
            case 3://funcion3
                impresionBoleto();
            break;
        }

    return 0;
}

//def de funciones: 
void impresionNombreApe(int a){
    a = respReg;
    for(int i = 0; i < a; i++){
        printf("\tAlumno #%d\n", i + 1);
        printf("Nombre del alumn@: %s\nApellido del Alumn@: %s\n", registro[i].nombreAl, registro[i].apellidoAl);
        printf("------------------------\n");
    }
}

void impresionPromedio(int a){
    for(int i = 0; i < a; i++){
        printf("El promedio del alumn@ #%d %s %s es de: %.2f%%\n", i + 1, registro[i].nombreAl, registro[i].apellidoAl, registro[i].promedioAl);
    }
}

void impresionBoleto(void){
        printf("\tQue alumno te gustaria ver su boleto:\n");
        int respNumBoleto = 1;
    do{
        for(int i = 0; i < respReg; i++){
            printf("\tAlumn@ #%d. %s, %s\n", i + 1, registro[i].nombreAl, registro[i].apellidoAl);
        }
            scanf("%d", &respNumBoleto);
        if(respNumBoleto > respReg || respNumBoleto <= 0){
            printf("Elige un alumn@ disponible del (1-%d)", respReg);
        }
    }
    while(respNumBoleto > respReg);
            float promBol = (registro[respNumBoleto-1].notaAl[0] + registro[respNumBoleto-1].notaAl[1] + registro[respNumBoleto-1].notaAl[2] + registro[respNumBoleto-1].notaAl[3])/ 4;
            printf("|--------------------------------------|\n");
            printf("|Nombre:--------------%s, %s |\n", registro[respNumBoleto-1].apellidoAl, registro[respNumBoleto-1].nombreAl);
            printf("|Año:------------------------------%d|\n", registro[respNumBoleto-1].anioAl);
            printf("|Notas:------------------%d, %d, %d, %d|\n", registro[respNumBoleto-1].notaAl[0], registro[respNumBoleto-1].notaAl[1], registro[respNumBoleto-1].notaAl[2], registro[respNumBoleto-1].notaAl[3]);
            printf("|Promedio:-----------------------%.2f%%|\n", promBol);
            printf("|--------------------------------------|");
    }
