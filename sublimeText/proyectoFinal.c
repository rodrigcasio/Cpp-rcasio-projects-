/*
    Rodrigo Casio García, Diego Choza
    Ingeniería en sistemas y tecnologías de la información.
    3er / 2do Cuatrimestre
    Prof. Irving Edgar Mendoza Ayala
    Diseño y programación de estructura de software
    Universidad del Valle de Atemajac 
    Proyecto Final.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define numUs 3
#define numUsCaj 3
#define numUsSup 3
#define numUsGen 3
#define numProvee 10

#define cantClientesFre 10
#define numPro 20
#define MAX_PRODUCTOS 100



//struct de clientes frecuentes.
struct client{
    int numCliente;
    char nombreCliente[25];
    char apellidoPat[25];
}clientFr[cantClientesFre];
// clientFr[0] = cliente 1.
// clientFr[1] = cliente 2.
// clienteFr[2] = cliente 3.

//decl Lista de clientes frecuentes (5);
struct client clientFr[cantClientesFre] = {{1, "Esteban", "Hawking"}, {2, "Kyrie", "Irving"}, 
                                                {3, "Marco", "Solis"}, {4, "Luismi", "Gallego"}, 
                                                {5, "Justin", "Bieber"}};

struct Proveedores{
    char *nombrePro;
    char *rcfPro;
    char *monedaPro;
    char *condicionesPro;
    char *tipoDePro;
}provedoresLista[numProvee] = {{"NATURAL MART", "NMA140204T2", "Moneda Nacional", "CONTADO", "FORANEO"},
                               {"SASIFER", "SAS151223L9", "Moneda Nacional", "CONTADO", "FORANEO"}, 
                               {"MAXICHEMICAL SA DE CV", "MAX180611QF6", "Moneda Nacional", "CONTADO", "FORANEO"},
                               {"JASAK", "JAS1307088DA", "Moneda Nacional", "CONTADO", "FORANEO"}, 
                               {"DISTRIBUIDORA ARCA CONTINENTAL, S. DE R.L. DE C.V.", "DJB850527F30", "Moneda Nacional", "CONTADO", "LOCAL"},
                               {"HOLAND, MEDICINA PERCY", "HMP140319DP8", "Moneda Nacional", "CONTADO", "FORANEO"},
                               {"DISTRIBUIDORA Y COMERCIALIZADORA SAN ISMAEL", "DCS200302GD0", "Moneda Nacional", "CONTADO", "LOCAL"},
                               };


//struct de productos
struct productos{
    int numProducto;
    char nombreProdu[50];
    float precioProd;
    int unidadesProd;
}produc[numPro];

//decl lista de productos (20);
struct productos produc[numPro] = {{101, "ETERNAL VIT E 400 SOBRE C/3 CAPS", 8.46, 347}, {102, "VIC VAPORUB REG 50GR", 75.32, 405},
                                        {103, "VITACILINA 16 GR", 23.32, 191}, {104, "HIEL MISIONERA 30ML", 51.38, 541}, {105, "ARNICA DE LA ABUELA UNGTO 30GR", 34.90, 667},
                                        {106, "MAGSOKON DOSIS 26 GR CAJA", 13.97, 585}, {107, "IODEX CRISTAL UNGUENTO 60GR", 64.10, 206}, 
                                        {108, "ASPIRINA 500 MG C/40 TABS", 35.46, 139}, {109, "MANZANILLA SOPHIA 15ML", 61.64, 87}, {110, "PARCHE ALLCOCK POROSO", 37.55, 149},
                                        {111, "YERBOVITAL POMADA FORAPINA 120GR", 25.86, 134}, {112, "NEXT 500MG C/10 TABS", 25.34, 73}, {113, "NOPALINA 454GR", 130.00, 79}, 
                                        {114, "ESTOMAQUIL C/20 SOB", 92.32, 76}, {115, "SCABISAN SHAMPOO 110ML", 123.17, 68}, {116, "MENTHOLATUM UNGTO 28GR", 36.75, 73}, 
                                        {117, "RABANO YODADO JBE 220ML", 87.38, 89}, {118, "UNESIA UNGTO 20GR", 79.00, 102}, {119, "TERRAMICINA OFTALMICA PDA 10GR", 109.73, 107},
                                        {120, "NORDIN SULFATIAZOL UNGUENTO TUBO 25GR", 49.60, 159}};

// estructura de 3 Cajeros, 3 Supervisores, 3 gerentes
// 1er cajero predeterminado, 1er supervisor predeterminado, 1er gerente predeterminado.
struct Cajeros{
    char nombreCaj[30];
    char contrasenaCaj[30];
    char letraUsuarioC;
} cajerosLista[numUsCaj] = {{"Pacheco", "univa1", 'A'},
                                       {"", "", 'A'},
                                       {"", "", 'A'}};

struct Supervisores{
    char nombreSup[30];
    char contrasenaSup[30];
    char letraUsuarioS;
}supervisLista[numUsSup] = {{"Sandy", "univa2", 'B'},
                                       {"", "", 'B'},
                                       {"", "", 'B'}};

struct Gerentes{
    char nombreGen[30];
    char contrasenaGen[30];
    char letraUsuarioG;
}gerenteLista[numUsGen] = {{"Irving", "univa3", 'C'},
                                    {"", "", 'C'},
                                    {"", "", 'C'}};

//structura de registro de venta:
typedef struct{
    int codigo;
    char nombre[50];
    float precio;
}producto;

//lista de productos 
producto inventario[] = {   {101, "ETERNAL VIT", 8.46},
                            {102, "VIC VAPORUB", 75.32},
                            {103, "VITACILINA", 23.32},
                            {104, "HIEL MISIONERA", 51.38},
                            {105, "ARNICA", 34.90},
                            {106, "MAGSOKON", 13.97},
                            {107, "IODEX CRISTAL", 64.10},
                            {108, "ASPIRINA", 35.46},
                            {109, "MANZANILLA", 61.64},
                            {110, "PARCHE ALLCOCK", 37.55}, 
                            {111, "YERBOVITAL",25.86},
                            {112, "NEXT ", 25.34},
                            {113, "NOPALINA", 130.00}, 
                            {114, "ESTOMAQUIL", 92.32},
                            {115, "SCABISAN", 123.17},
                            {116, "MENTHOLATUM", 36.75}, 
                            {117, "RABANO YODADO", 87.38},
                            {118, "UNESIA UNGTO", 79.00},
                            {119, "TERRAMICINA", 109.73},
                            {120, "NORDIN SULFATI", 49.60}};

//variable con valor del total de productos
int totalProductos = sizeof(inventario) / sizeof(inventario[0]);

int buscarProducto(int codigo) {
    for (int i = 0; i < totalProductos; i++) {
        if (inventario[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}


//funct prototipos
void listaDeProductos(void);
void listaDeClientesFr(void);
void menuDeProductosCaj(void);
void listaDeUsuarios(void);
void listaDeProveedores(void);
void agregarPerfil(void);
void realizarVenta(void);
char inicioDeSesion(void);
int validarCredenciales(char* , char* , char );
void menuCajero(void);
void menuSupervisor(void);
void menuGerente(void);
void limpiarBuff(void);
void agregarProductoExcel(void);
void verInventarioCreado(void);



int main(){
    //variable de respuesta del cliente.
    int resp;
    //variable para almacenar el tipo de letra que contiene el usuario.
    char tipoUsuario, nombreIng;

    do{
        printf("\n\t*=====* MENU DE INICIO *=====*\n");
        printf("1. Iniciar Sesion\n");
        printf("2. Autores\n");
        printf("3. Salir\n");
        printf("Opcion: ");
        scanf("%d", &resp);

        switch(resp){
            case 1:
                tipoUsuario = inicioDeSesion();
                //condicion dependiendo el tipo de letra.
                if(tipoUsuario == 'A'){
                    menuCajero();
                }
                else if(tipoUsuario == 'B'){
                    menuSupervisor();
                }
                else if(tipoUsuario == 'C'){
                    menuGerente();
                }
                else{
                     printf("Regresando al menu principal...\n");
                }
                break;

            case 2:
                printf("\t\t Rodrigo Casio, Diego Choza (2025)\n");
            break;

            case 3:
                printf("Saliendo del programa...\n");
            break;

            default:
                printf("Opcion invalida, porfavor selecciona una opcion (1-2)\n");
        }
    }
    while(resp != 3);
    

  return 0;
}

//Declaracion dee funciones:

//fucnion de impresión de productos 
void listaDeProductos(void){
    printf("\n\t*=====* LISTA DE PRODUCTOS *=====*\n");
    printf("Codigo ID | %-50s | Precio    | Cantidad\n", "Nombre");
    printf("----------|--------------------------------------------------|-----------|----------\n");
    for (int i = 0; i < numPro; i++) {
        printf("%-9d | %-50s | %8.2f | %8d\n", produc[i].numProducto, produc[i].nombreProdu, produc[i].precioProd, produc[i].unidadesProd);
    }
}

//funcion de imoresion de ckientes frecuentes:
void listaDeClientesFr(void){
    printf("\n\t*=====* LISTA DE CLIENTES FRECUENTES *=====*\n");
    printf("ID   | %-25s | %-25s\n", "Nombre", "Apellido Paterno");
    printf("-----|---------------------------|---------------------------\n");
    for (int i = 0; i < cantClientesFre; i++) {
        printf("%-4d | %-25s | %-25s\n", clientFr[i].numCliente, clientFr[i].nombreCliente, clientFr[i].apellidoPat);
    }
}

void listaDeUsuarios(void){
    //lista cajeros
    printf("\n\t*=====* USUARIOS DE CAJEROS *=====*\n");
    printf("#    | %-30s | %-30s | Tipo\n", "Nombre", "Contraseña");
    printf("-----|--------------------------------|--------------------------------|------\n");
    for (int i = 0; i < numUsCaj; i++) {
        printf("#%-3d | %-30s | %-30s | %c\n", i + 1, cajerosLista[i].nombreCaj, cajerosLista[i].contrasenaCaj, cajerosLista[i].letraUsuarioC);
    }

    //lista supervisores
    printf("\n\t*=====* USUARIOS DE SUPERVISORES *=====*\n");
    printf("#    | %-30s | %-30s | Tipo\n", "Nombre", "Contraseña");
    printf("-----|--------------------------------|--------------------------------|------\n");
    for (int i = 0; i < numUsSup; i++) {
        printf("#%-3d | %-30s | %-30s | %c\n", i + 1, supervisLista[i].nombreSup, supervisLista[i].contrasenaSup, supervisLista[i].letraUsuarioS);
    }

    //lista gerentes
    printf("\n\t*=====* USUARIOS DE GERENTES *=====*\n");
    printf("#    | %-30s | %-30s | Tipo\n", "Nombre", "Contraseña");
    printf("-----|--------------------------------|--------------------------------|------\n");
    for (int i = 0; i < numUsGen; i++) {
        printf("#%-3d | %-30s | %-30s | %c\n", i + 1, gerenteLista[i].nombreGen, gerenteLista[i].contrasenaGen, gerenteLista[i].letraUsuarioG);
    }
    
}

void listaDeProveedores(){
    printf("\n\t*===== PROVEEDORES =====*\n");
    printf("#    | %-50s | %-13s | %-15s | %-12s | %-8s\n", "Nombre", "RFC", "Moneda", "Condiciones", "Tipo");
    printf("-----|----------------------------------------------------|---------------|----------------|--------------|----------\n");
    for (int i = 0; i < numProvee; i++) {
        printf("#%-3d | %-50s | %-13s | %-15s | %-12s | %-8s\n", i + 1, provedoresLista[i].nombrePro, provedoresLista[i].rcfPro, provedoresLista[i].monedaPro, provedoresLista[i].condicionesPro, provedoresLista[i].tipoDePro);
    }
}

//funcion de intro 
void intro(void){
    printf("\t------------------------------\n");
    printf("\tPROYECTO FINAL: Punto de venta\n");
    printf("\tRodrigo Casio, Diego Choza\n");
}

//funcion de realizacion de venta 
void realizarVenta(void){
    int codigo, cantidad;
    float total = 0.0;
    char productosComprados[MAX_PRODUCTOS][50]; 
    int cantidadesCompradas[MAX_PRODUCTOS]; 
    float subtotales[MAX_PRODUCTOS]; 
    int contador = 0;
    
    printf("\n\t *=====* PROCESO DE VENTA *=====* \n");
    printf(" *======* PRODUCTOS DISPONIBLES *=======*\n");
    menuDeProductosCaj();
    printf("ingrese el codigo y luego la cantidad\n");
    printf("(ingrese \"0\" para terminar la venta)\n");
    
    while (1) {
        printf("Codigo: ");
        scanf("%d", &codigo);
        
        if (codigo == 0) break;

        int indice = buscarProducto(codigo);
        if (indice == -1) {
            printf("Producto no encontrado. Intente nuevamente.\n");
            continue;
        }

        printf("Cantidad: ");
        scanf("%d", &cantidad);
        
        if (cantidad <= 0) {
            printf("Cantidad inválida. Intente nuevamente.\n");
            continue;
        }

        float subtotal = inventario[indice].precio * cantidad;
        total += subtotal;

        strcpy(productosComprados[contador], inventario[indice].nombre);
        cantidadesCompradas[contador] = cantidad;
        subtotales[contador] = subtotal;
        contador++;
    }

    // Creacion de todo el ticket 
    printf("\nFarmacia Miguel García Perez S.A. de C.V.\n");
    printf("----------------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Producto", "Cantidad", "Subtotal");
    printf("----------------------------------------\n");

    for (int i = 0; i < contador; i++) {
        printf("%-20s %-10d $%-9.2f\n", 
               productosComprados[i], 
               cantidadesCompradas[i], 
               subtotales[i]);
    }

    printf("----------------------------------------\n");
    printf("TOTAL: $%.2f\n", total);
    printf("Gracias por su compra.\n");
}

void agregarPerfil(void){
    char nombre[30], contrasena[30], tipoUs;

    //escoger el tipo de usuario que desee crear
    printf("\nTipo de usuario (A - Cajero, B- Supervisor, C - Gerente)\n");
    printf("(Ingresar mayúscula A, B o C): ");
    scanf("%s", &tipoUs);
    
    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Contrasena: ");
    scanf("%s", contrasena);

    //switch para proceso de creacion de cajero, supervisor o gerente.
    switch(tipoUs){
        case 'A':
            for(int i = 0; i < numUsCaj; i++){
                if(cajerosLista[i].nombreCaj[0] == '\0'){ //revisa si el espacio esta vacio
                    strcpy(cajerosLista[i].nombreCaj, nombre); //introduce el nombre del nuevo perfil a la estruct
                    strcpy(cajerosLista[i].contrasenaCaj, contrasena);
                    cajerosLista[i].letraUsuarioC = 'A';
                    printf("El perfil de \"Cajero\" fue agregado exitosamente\n");
                    return;
                }
            }
            printf("No hay espacio para mas usuarios de cajeros\n");
        break;

        case 'B':
            for(int i = 0; i < numUsSup; i++){
                if(supervisLista[i].nombreSup[0] == '\0'){
                    strcpy(supervisLista[i].nombreSup, nombre);
                    strcpy(supervisLista[i].contrasenaSup, contrasena);
                    supervisLista[i].letraUsuarioS = 'B';
                    printf("El perfil de \"Supervisor\" fue agregado exitosamente\n");
                    return;
                }
            }
            printf("No hay espacio para mas usuarios de supervisores\n");
        break;

        case 'C':
            for(int i = 0; i < numUsGen; i++){
                if(gerenteLista[i].nombreGen[0] == '\0'){
                    strcpy(gerenteLista[i].nombreGen, nombre);
                    strcpy(gerenteLista[i].contrasenaGen, contrasena);
                    gerenteLista[i].letraUsuarioG = 'C';
                    printf("El perfinl de \"Gerente\" fue agregado exitosamente\n");
                    return;
                }
            }
            printf("No hay espacio para mas usuarios de gerentes\n");
        break;

        default:
            printf("Tipo de usuario introducido es invalido\n");
    }
}

int validarCredenciales(char* nombre, char* contrasena, char tipoUsuario){
    switch(tipoUsuario){
        //comparará si los nombres introducidos en inicio de sesion son iguales a alguno de los arrays de estruc.
        case 'A':
            for(int i = 0; i < numUs; i++){
                if(strcmp(nombre, cajerosLista[i].nombreCaj) == 0 && strcmp(contrasena, cajerosLista[i].contrasenaCaj) == 0){
                    return 1;
                }
            }
        break;

        case 'B':
            for(int i = 0; i < numUs; i++){
                if(strcmp(nombre, supervisLista[i].nombreSup) == 0 && strcmp(contrasena, supervisLista[i].contrasenaSup) == 0){
                    return 1;
                }
            }
        break;

        case 'C':
            for(int i = 0; i < numUs; i++){
                if(strcmp(nombre, gerenteLista[i].nombreGen) == 0 && strcmp(contrasena, gerenteLista[i].contrasenaGen) == 0){
                    return 1;
                }
            }
        break;
    }
    return 0; 
}

char inicioDeSesion(void){ // return char, para regresar al tipo de usuario a su menu que corresponda. 
    //variables para escanear el input del usuario.
    char nombreIng[30], contraIng[30], tipoUsuario;

    printf("\n\t*========* INICIAR SESIÓN *========*\n");
    printf("\nTipo de usuario (A - Cajero, B - Supervisor, C - Gerente): \n");
    printf("(Ingresar mayúscula A, B o C): ");
    scanf(" %c", &tipoUsuario);

    do{
        printf("\nUsuario: ");
        scanf("%s", nombreIng);
        printf("Contrasena: ");
        scanf("%s", contraIng);

        if(validarCredenciales(nombreIng, contraIng, tipoUsuario)){
            printf("Inicio de sesión exitosa\n");
            //regresara el tipo de usuario 'letra' que corresponde al tipo de usuario.
            return tipoUsuario;  
        }
        else{
            printf("\n(Usuario o Contraseña incorrecta...)\n");
            printf("*Vuelve a intentarlo*\n");
        }
    }
    while(1);
}

//DEF. DE FUNCIONES DE ARCHIVO. ---------------
void limpiarBuff(){
    while(getchar() != '\n');
}

//funcion para agregar productos.
void agregarProductoExcel(){
    char codigo[50], nombre[50];
    int stockProd;

    FILE *archivo = fopen("Inventario.csv", "a");
    //condicion si el archivo no es encontradp.
    if(archivo == NULL){
        printf("Error al abrir el archivo.\n");
        return;
    }

    printf("\n *===* AGREGAR PRODUCTO *===*\n");
    printf("Codigo del producto nuevo: ");
    //condicion si el usuario no escribe un valor en el num de codigo.
    if(scanf("%49s", codigo) != 1){
        printf("Entrada invalida para el codigo\n");
        fclose(archivo);
        return;
    }
    limpiarBuff();

    printf("Nombre: ");
    //condicion si el usuario no registra correctamente el nombre, 
    //dentro de la funcion scanf() el uso [^\n] permite escanear espacios.
    if(scanf("%49[^\n]", nombre) != 1){ 
        printf("Entrada invalida para nombre. \n");
        fclose(archivo);
        return;
    }
    limpiarBuff();

    printf("Stock: ");
    //condicion de cantidad debe ser mayor a 0. 
    if(scanf("%d", &stockProd) != 1 || stockProd < 0){
        printf("Stock invalido (escribe almenos una cantidad del producto y no puede ser negativo!. \n)");
        fclose(archivo);
        return;
    }
    limpiarBuff();

    //escribir dentro del archivo cvs los valores de las variables usadas. 
    fprintf(archivo, "%s, %s, %d\n", codigo, nombre, stockProd); 
    fclose(archivo); 
}

void verInventarioCreado(){
    printf("\n *===* INVENTARIO NUEVO *===*\n");

    FILE *archivo = fopen("Inventario.csv", "r");
    if(archivo == NULL){
        printf("No hay productos registrados.\n");
        return;
    }

    char linea[100];
    while(fgets(linea, sizeof(linea), archivo)){
        printf("%s", linea);
    }

    fclose(archivo);
}
// ---------------------FIN DE FUNCIONES DE ARCHIVO.



//Funciones de menus: CAJERO, SUPERVISOR, GERENTE.
void menuCajero(void){
    int respMenuCaj;
    do{
        printf("\n\t*=====* MENU CAJERO *=====*\n");
        printf("1. Realizar Venta\n");
        printf("2. Lista de clientes frecuentes\n");
        printf("3. Lista de productos\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &respMenuCaj);

        switch(respMenuCaj){
            case 1:
                realizarVenta();
            break;

            case 2:
                listaDeClientesFr();
            break;

            case 3:
                listaDeProductos();
            break;

            case 4:
                printf("Regresando al menu principal...\n");
            break;

            default:
                printf("Opcion invalida, porfavor selecciona una opción (1-2)\n");
        }
    }
    while(respMenuCaj != 4);
}

void menuDeProductosCaj(void){
    printf("\n\t*=====* MENU DE PRODUCTOS *=====*\n");
    printf("Código    | %-30s | Precio\n", "Nombre");
    printf("----------|--------------------------------|----------\n");
    for (int i = 0; i < totalProductos; i++) {
        printf("%-9d | %-30s | $%7.2f\n", inventario[i].codigo, inventario[i].nombre, inventario[i].precio);
    }
}


void menuSupervisor(void){
    int respMenuSup;
    do{
        printf("\t\n*=====* MENU SUPERVISOR *=====*\n");
        printf("1. Realizar venta\n");
        printf("2. Lista de clientes Frecuentes\n");
        printf("3. Inventario de productos\n");
        printf("4. inventario nuevo\n");
        printf("5. Salir\n");
        printf("Opcion: ");
        scanf("%d", &respMenuSup);

        switch(respMenuSup){
            case 1:
                realizarVenta();
            break;

            case 2:
                listaDeClientesFr();
            break;

            case 3:
                listaDeProductos();
            break;

            case 4:
                verInventarioCreado();
            break;

            case 5:
                printf("Terminando...\n");
            break;

            default:
                printf("Opcion ínvalida, Seleccione una opción (1-5)");
        }
    }
    while(respMenuSup != 5);

}

void menuGerente(void){
    int respGen;
    do{
        printf("\n\t*=====* MENU GERENTE *=====*\n");
        printf("1. Realizar venta\n");
        printf("2. Lista de clientes frecuentes\n");
        printf("3. Lista de Proveedores\n");
        printf("4. Inventario\n");
        printf("5. Agregar nuevo inventario\n");
        printf("6. Ver nuevo inventario\n");
        printf("7. Lista de Usuarios\n");
        printf("8. Agregar Nuevos Usuarios\n");
        printf("9. Salir\n");
        scanf("%d", &respGen);

        switch(respGen){
            case 1:
                realizarVenta();
            break;

            case 2:
                listaDeClientesFr();
            break;

            case 3:
                listaDeProveedores();
            break;

            case 4:
                listaDeProductos();
            break;

            case 5:
                agregarProductoExcel();
            break;

            case 6:
                verInventarioCreado();
            break;

            case 7:
                listaDeUsuarios();
            break;

            case 8:
                agregarPerfil();
            break;

            case 9:
                printf("Terminando ...\n");
            break;

            default:
                printf("Opcion invalida, porfavor seleccione una opcion (1-7)");
        }
    }
    while(respGen != 9);
}