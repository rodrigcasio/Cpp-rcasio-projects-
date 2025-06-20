#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define numUs 3
#define cantClientesFre 7
#define numPro 20


//struct de usuarios
struct usuarios{
    char nombre[25];
    char apellidoPat[25];
    char apellidoMat[25];
    char contrasena[25];
}rol[numUs];
// rol[0] = cajero
// rol[1] = supervisor
// rol[2] = gerente

//usuarios creados

struct usuarios rol[numUs] = {"Irving", "Mendoza", "Ayala", "univa1"};



//struct de clientes frecuentes.
struct client{
    int numCliente;
    char nombreCliente[25];
    char apellidoPat[25];
}clientFr[cantClientesFre];
// clientFr[0] = cliente 1.
// clientFr[1] = cliente 2.
// clienteFr[2] = cliente 3.
// clienteFr[3] = cliente 4.
// clienteFr[4] = cliente 5.
// clienteFr[5] = cliente por agregar..
// clienteFr[6] = cliente por agregar..

//decl Lista de clientes frecuentes (5);
    struct client clientFr[cantClientesFre] = {{1, "Esteban", "Hawking"}, {2, "Alberto", "Hawking"}, 
                                                {3, "Marco", "Solis"}, {4, "Luis", "Gallego"}, 
                                                {5, "Justin", "Bieber"}};


//struct de productos
struct productos{
    int numProducto;
    char nombreProdu[50];
    float precioProd;
    int unidadesProd;
}produc[numPro];

//decl lista de productos (10);
    struct productos produc[numPro] = {{101, "ETERNAL VIT E 400 SOBRE C/3 CAPS", 8.46, 347}, {102, "VIC VAPORUB REG 50GR", 75.32, 405},
                                        {103, "VITACILINA 16 GR", 23.32, 191}, {104, "HIEL MISIONERA 30ML", 51.38, 541}, {105, "ARNICA DE LA ABUELA UNGTO 30GR", 34.90, 667},
                                        {106, "MAGSOKON DOSIS 26 GR CAJA", 13.97, 585}, {107, "IODEX CRISTAL UNGUENTO 60GR", 64.10, 206}, 
                                        {108, "ASPIRINA 500 MG C/40 TABS", 35.46, 139}, {109, "MANZANILLA SOPHIA 15ML", 61.64, 87}, {110, "PARCHE ALLCOCK POROSO", 37.55, 149},
                                        {111, "YERBOVITAL POMADA FORAPINA 120GR", 25.86, 134}, {112, "NEXT 500MG C/10 TABS", 25.34, 73}, {113, "NOPALINA 454GR", 130.00, 79}, 
                                        {114, "ESTOMAQUIL C/20 SOB", 92.32, 76}, {115, "SCABISAN SHAMPOO 110ML", 123.17, 68}, {116, "MENTHOLATUM UNGTO 28GR", 36.75, 73}, 
                                        {117, "RABANO YODADO JBE 220ML", 87.38, 89}, {118, "UNESIA UNGTO 20GR", 79.00, 102}, {119, "TERRAMICINA OFTALMICA PDA 10GR", 109.73, 107},
                                        {120, "NORDIN SULFATIAZOL UNGUENTO TUBO 25GR", 49.60, 159}};


struct Cajeros{
    char nombreCaj[30];
    char contrasenaCaj[30];
}cajeroStr[3];


// cuenta predeterminada #1 
struct Cajeros cajerosStr[0] = {"Pacheco", "univa1"};

struct Supervisores{
    char nombreSup[30];
    char contrasenaSup[30];
}supervi[3];

// cuenta predeterminada #2
struct Supervisores supervi[0] = {"Sandy", "univa2"};

struct Gerentes{
    char nombreGen[30];
    char contrasenaGen;
}gerentes[3];

// cuenta predeterminada #3
struct Gerentes gerentes[0] = {"Irving", "univa3"};


//func protopyte:
void registroUsCajero(void);
void registroUsSuper(void);
void registroUsGerent(void);
void listaDeProductos(void);
void listaDeClientesFr(void);
void intro(void);


int main(){

    int respUs;
    //variable de usuario nombre y contr.
    char nombreIng[25], contraIng[25];
    //varibale para comparar usuario y contraseñas
    int resultadoNom, resultadoCon;

    
   
    printf("\t------------------------------\n");
    printf("\tPROYECTO FINAL: Punto de venta\n");
    printf("\tRodrigo Casio, Diego Choza\n");
    printf("\nEscoge el tipo de Usuario que quieres crear:\n");
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
    //switch crear usuario.
    switch(respUs){
        case 1:
            registroUsCajero(); //1. crea cuenta.
            //2. inicia sesion 
            printf("\n\t----------------------------\n");
            printf("\t      INICIAR SESION\n");
            do{
                printf("\nUsuario: ");
                scanf("%s", nombreIng);
                printf("\nContraseña: ");
                scanf("%s", contraIng);

                //comparando contenido de nombre y contra.
                resultadoNom = strcmp(nombreIng, rol[0].nombre); 
                resultadoCon = strcmp(contraIng, rol[0].contrasena);

                //si mal nombre
                if(resultadoNom > 0){
                    printf("\n(Usuario o Contraseña es incorrecta...)\n");
                    printf("*Vuelve intentarlo*\n");
                }
                else if(resultadoCon > 0){
                    printf("\nUsuario o Contraseña es incorrecta...\n");
                    printf("*Vuelve intentarlo*\n");
                }
            }
            while(resultadoNom > 0 || resultadoCon > 0);          
            
            //3. escoge funcion.
            printf("\t-----------------------------\n");
            printf("\t      INTERFAZ DE CAJERO\n");
            
            

        break;

        case 2:
            registroUsSuper();
            printf("\n\t----------------------------\n");
            printf("\t      INICIAR SESION\n");
            do{
                printf("\nUsuario: ");
                scanf("%s", nombreIng);
                printf("\nContraseña: ");
                scanf("%s", contraIng);

                //comparando contenido de nombre y contra.
                resultadoNom = strcmp(nombreIng, rol[1].nombre); 
                resultadoCon = strcmp(contraIng, rol[1].contrasena);

                //si mal nombre
                if(resultadoNom > 0){
                    printf("\n(Usuario o Contraseña es incorrecta...)\n");
                    printf("*Vuelve intentarlo*\n");
                }
                else if(resultadoCon > 0){
                    printf("\n(Usuario o Contraseña es incorrecta...)\n");
                    printf("*Vuelve intentarlo*\n");
                }
            }
            while(resultadoNom > 0 || resultadoCon > 0); 

        break;

        case 3:
            registroUsGerent();
            printf("\n\t----------------------------\n");
            printf("\t      INICIAR SESION\n");
            do{
                printf("\nUsuario: ");
                scanf("%s", nombreIng);
                printf("\nContraseña: ");
                scanf("%s", contraIng);
 
                //comparando contenido de nombre y contra.
                resultadoNom = strcmp(nombreIng, rol[2].nombre); 
                resultadoCon = strcmp(contraIng, rol[2].contrasena);

                //si mal nombre
                if(resultadoNom > 0){
                    printf("\n(Usuario o Contraseña es incorrecta...)\n");
                    printf("*Vuelve intentarlo*\n");
                }
                else if(resultadoCon > 0){
                    printf("\n(Usuario o Contraseña es incorrecta...)\n");
                    printf("*Vuelve intentarlo*\n");
                }
            }
            while(resultadoNom > 0 || resultadoCon > 0); 

        break;
    }

    

    return 0;
}

//func definiciones:
void registroUsCajero(void){
    printf("\t---------------------------\n");
    printf("\tCREACIÓN DE USUARIO \"CAJERO\"\n");
    printf("\nIngrese un nombre de Usuario: ");
    scanf("%s", rol[0].nombre);
    printf("\nIngrese su Apellido Paterno: ");
    scanf("%s", rol[0].apellidoPat);
    printf("\nIngrese su Apellido Materno: ");
    scanf("%s", rol[0].apellidoMat);
    printf("\nIngrese una Contraseña: ");
    scanf("%s", rol[0].contrasena);
}

void registroUsSuper(void){
    printf("\t---------------------------\n");
    printf("\tCREACIÓN DE USUARIO \"SUPERVISOR\"\n");
    printf("\nIngrese un nombre de Usuario: ");
    scanf("%s", rol[1].nombre);
    printf("\nIngrese su Apellido Paterno: ");
    scanf("%s", rol[1].apellidoPat);
    printf("\nIngrese su Apellido Materno: ");
    scanf("%s", rol[1].apellidoMat);
    printf("\nIngrese una Contraseña: ");
    scanf("%s", rol[1].contrasena);
}

void registroUsGerent(void){
    printf("\t---------------------------\n");
    printf("\tCREACIÓN DE USUARIO \"GERENTE\"\n");
    printf("\nIngrese un nombre de Usuario: ");
    scanf("%s", rol[2].nombre);
    printf("\nIngrese su Apellido Paterno: ");
    scanf("%s", rol[2].apellidoPat);
    printf("\nIngrese su Apellido Materno: ");
    scanf("%s", rol[2].apellidoMat);
    printf("\nIngrese una Contraseña: ");
    scanf("%s", rol[2].contrasena);
}

void listaDeProductos(void){
    for(int i = 0; i < numPro; i++){
        printf("Codigo ID: %d, Nombre: %s, Precio: %.2f.\n", produc[i].numProducto, produc[i].nombreProdu, produc[i].precioProd);
    }
}

void listaDeClientesFr(void){
    for(int i = 0; i < cantClientesFre; i++){
        printf("Numero ID : %d, Nombre: %s, Apellido Paterno: %s\n", clientFr[i].numCliente, clientFr[i].nombreCliente, clientFr[i].apellidoPat);
    }
}

void intro(void){
    printf("\t------------------------------\n");
    printf("\tPROYECTO FINAL: Punto de venta\n");
    printf("\tRodrigo Casio, Diego Choza\n");
}