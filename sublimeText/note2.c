#include <stdio.h>


void func1(void);
int suma(int, int); // funcion suma prototipo
void suma2();
int suma3();
void suma4(int, int);
float division(int, int);


int main(){

    int x = 10, y = 25, z; 
    int o = 30, p = 40;
    float r;

    func1();

    z = suma(x,y);
    printf("El resultado de la suma es: %d\n", z);
    suma2();
    z = suma3();
    printf("El resultado de la segunda suma3 es: %d\n", z);
    suma4(o, p);
    r = division(x, p);
    printf("El resultado de la división es: %.2f", r);


    return 0;
}

// procedimientos de funciones:  
int suma(int a, int b){

    return(a + b);
}

void func1(void){
    printf("Esta es una función");
}

void suma2(){
    int h = 5, i= 6 , j;
    j = h + i;
    printf("El resultado de la segunda suma2 es: %d\n", j);
}

int suma3(){
    int h = 3, i= 3 , j;
    j = h + i;
    return (j);
}

void suma4(int a, int b){
    printf("El resultado de la suma4 es: %d", a + b);
}

float division(int a, int b){
    return((float)a /(float)b);
} 