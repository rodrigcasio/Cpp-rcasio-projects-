#include <stdio.h>
#include <math.h>

double logConVariableBase(double a , double b) { //función para la base log como una variable.  
    if(a <= 0 || b <= 0 || b == 1){
        printf("Valor de r invalido, debe ser positivo y no puede ser 1.");
    }
    return(log(a)/log(b));
}

int main(){

    double a, n, r, intera, resultado;
    //double resultado = logConVariableBase(n / a , r) + 1;

    printf("Ingresa el valor de \"r\":");
    scanf("%lf", &r);

    printf("Ingresa el valor de \"a\":");
    scanf("%lf", &a);

    printf("Ingresa el valor de \"n\":");
    scanf("%lf", &n);

    resultado = logConVariableBase(n, r) + 1;

    printf("\tEl numero de iteraciónes son: %f", floor(resultado));

    
    while(a < n){
        printf("%.1f\n", a);
        a = r * a;
    }

}