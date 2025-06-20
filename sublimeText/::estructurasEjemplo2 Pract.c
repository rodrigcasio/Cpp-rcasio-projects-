//estructurasEjemplo.c
#include <stdio.h>
#include <stdlib.h>
//estructura

//funciones prototypes;

int impreAlumnos(int, int);
int imprePromedios(char, char, int, foat);
void impreBoleto();
/*
    Rodrigo Casio García
    Ingeniería en sistemas y tecnologías de la información.
    3er Cuatrimestre
    Prof. Irving Edgar Mendoza Ayala
    Diseño y programación de estructura de software
    Universidad del Valle de Atemajac 
    Práctica 9 - Escuela (Struct).

	Objetivos: 

	1. pedir el numero de registros para llenar la información de los alumnos

	2. Llenar la información de los alumnos

	3. 

*/

struct alumno{
	char nombreAlumno[25];
	char apellidoAlumno [25];
	int edad;
	int anio;
	int notaAlumno[4];
	float promedioAlumno;
} registro[numReg];

int main(){
    
    //declaración de variables
	int i, acum, 
	//numero de alumnos 
	int numReg;
	
	printf("\t Bienvenido a la practica #9 de Rodrigo Casio\n");
	printf("\t----------------------------------------------\n");
	printf("Cuantos registros necesitas para registrar los datos de alumnos\n"); 
	
	
	do{
	    scanf("%d", &numReg);
	    
	    if(numReg > 20 || numReg <= 0){
	        printf("La cantidad maxima de registros es (1-20)");
	    }
	}
	while(numReg > 20);
	
    //agregar info dentro den la estructura.
	//struct alumno R[numReg] = {"Rodrigo", "Casio", 20, 1};
    
    //pide al usuario agregar valores en &R1.nota
	for(i = 0; i < numReg; i++){
	    reg[numReg].prom = 0;
	    printf("\tInformacio de Alumno N# %d\n" i + 1);
	    printf("Ingrese el Nombre del alumno (menor de 25 letras):\n");
	    scanf("%s", &registro[i].nombreAlumno); 
	    printf("Ingrese el Apellido del alumno (menor de 25 letras):\n");
	    scanf("%s", &registro[i].apellidoAlumno);
	    printf("Ingrese la Edad del alumno\n");
	    scanf("%d", &registro[i].edad);
	    printf("Ingrese el Año que cursa el alumno\n");
	    scanf("%d", registro[i].año);
	    
	    for(j = 0; j < 4; j++){
	        
	        printf("Ingrese la nota N %d de este alumno\n");
	        scanf("%d", &registro[i].notaAlumno[j]);
	    }
	    for(j = 0; j < 4; j++){
	        registro[i].promedioAlumno = registro[i].promedioAlumno + registro[i].notaAlumno[j];
	        registro[i].promedioAlumno = registro[i].promedioAlumno/4
	    }
	    for(i = 0; i < numReg; i++){
	        printf("\t El alumno \"%s %s\"", registro[i].nombreAlumno, reg[i].apellidoAlumno);
	        printf("que tiene %d años y cursa el año %d,\n", registro[i.edad], registro[i].anio);
	        printf("%d' '%d'", registro[i].nota[0], reg[i].nota[1]);
	        printf("'%d' '%d' \n", registro[i].nota[2], registro[i], nota[3]);
	    }
	    
	    
		printf("Ingrese la nota %d: ", i + 1);
		scanf("%d", &R1.nota[i]);
		acum = acum + regsistro[i].nota[i]; //almacena el total de los valores 
	}
	registro[i].prom = (float) acum / 4; //operacion para promedio
	printf("El promedio del alumno %s, %s es %.2f", R1.ap, R1.no, R1.prom);

    return 0;	
}