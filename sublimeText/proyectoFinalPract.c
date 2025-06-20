
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define numUs 3

// struct 1
struct usuarios{
    char nombre[25];
    char apellido[25];
}roles[numUs];

//struct 2
struct usuariosConContraseña{
    char nombre[25];
    char apellido[25];
    char contraseña[20];
}roles2[numUs];

//struct 
struct usuariosScan{
    char nombre[25];
    char apellidoPat[25];
    char apellidoMat[25];
    char contraseña[25];
}roles3[numUs];

//func protoptyes 
void registroUsCajero(void);
void registroUsSuper(void);
void registroUsGerente(void);

int main(){
    
    int respUs;
    
    //declare the variables inside the array structures.
    struct usuarios roles[numUs] = {{"Maria", "Martinez"}, {"Jose", "Eduardo"}, {"Cecilia", "Garcia"}};
    for(int i = 0; i < numUs; i++){
        printf("El nombre completo del usuario #%d es: %s, %s.\n", i + 1, roles[i].nombre, roles[i].apellido);
    }
    
    //declaring the array of structures:
    struct usuariosConContraseña roles2[numUs] = {{"Pepe", "Aguilar", "Univa1"},{"Estefania", "Lopez", "Univa2"},{"Roberto", "Estrada", "Univa3"}};
    for(int i = 0; i < numUs; i++){
        printf("El nombre completo y contraseña del los empleados de la segunda estruct son: #%d: %s, %s. contraseña: %s\n", i + 1, roles2[i].nombre, roles2[i].apellido, roles2[i].contraseña);
    }
    
    //
        
    printf("Escoge el tipo de usuario que quieres crear\n");   
    do{
        printf("1. Cajero\n");
        printf("2. Supervisor\n");
        printf("3. Gerente\n");
        scanf("%d", &respUs);
        
        if(respUs > numUs || respUs <= 0){
            printf("Escoge uno de los tipos de usuarios (1-3)\n");
        }
    }
    while(respUs > numUs);
    
    switch(respUs){
        case 1:
            printf("\t----------------------------\n");
            printf("\tCREACIÓN DE USUARIO \"CAJERO\"\n");
            printf("Ingrese un Nombre: ");
            scanf("%s", roles3[0].nombre);
            printf("\nIngrese su Apellido Paterno: ");
            scanf("%s", roles3[0].apellidoPat);
            printf("\nIngrese su Apellido Materno: ");
            scanf("%s", roles3[0].apellidoMat);
            printf("\nIngrese una Contraseña: ");
            scanf("%s", roles3[0].contraseña);  
        break;
            
        case 2:
            registroUsSuper();
        break;
        
        case 3:
            registroUsGerente();
        break;
    }
    
    return 0;
}

void registroUsCajero(void){
    printf("\t----------------------------\n");
    printf("\tCREACIÓN DE USUARIO \"CAJERO\"\n");
    printf("Ingrese un Nombre: ");
    scanf("%s", roles3[0].nombre);
    printf("\nIngrese su Apellido Paterno: ");
    scanf("%s", roles3[0].apellidoPat);
    printf("\nIngrese su Apellido Materno: ");
    scanf("%s", roles3[0].apellidoMat);
    printf("\nIngrese una Contraseña: ");
    scanf("%s", roles3[0].contraseña); 
}

void registroUsSuper(void){
    printf("\t--------------------------------\n");
    printf("\tCREACIÓN DE USUARIO \"SUPERVISOR\"\n");
    printf("Ingrese un Nombre: ");
    scanf("%s", roles3[1].nombre);
    printf("\nIngresa su Apellido Paterno: ");
    scanf("%s", roles3[1].apellidoPat);
    printf("\nIngresa su Apellido Materno: ");
    scanf("%s", roles3[1].apellidoMat);
    printf("\nIngrese una Contraseña: ");
    scanf("%s", roles3[1].contraseña);
}

void registroUsGerente(void){
    printf("\t-----------------------------\n");
    printf("\tCREACIÓN DE USUARIO \"GERENTE\"\n");
    printf("Ingresa un Nombre: ");
    printf("%s", roles3[2].nombre);
    printf("\nIngrese su Apellido Paterno: ");
    printf("%s", roles3[2].apellidoPat);
    printf("\nIngrese su Apellido Materno: ");
    scanf("%s", roles3[2].apellidoMat);
    printf("\nIngresa una Contraseña: ");
    scanf("%s", roles3[2].contraseña);
}
