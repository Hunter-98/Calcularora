#include<stdio.h>
#include<math.h>
#include<conio.h>

//Calculadora
//Hace operaciones aritmeticas Basicas Como Suma, Resta, Multiplicacion, divicion, Raiz Cuadrada

int main(){

// Declaracion nde variables
    double a, b, resuldado, fin=1;
    int d;
    char c;
    	double Suma(double, double);
        double Resta(double, double);
        double Multiplicacion(double, double);
        double Divicion(double, double);
        double Raiz_Cuarada(double);
        double ResultadoOp(double);
        void valor(double *, double *);
        void menu(void);


        do
        {
            /* code */
            menu();
            d = getchar();
            if(d!='\n'&&(d<'1' && d>'6')){

                printf("%s%s","\nNo es una opcion valida","Introdusca una opcion valida");
                printf(" \nOprime una tacla y repita el proceso");
                getchar(); getchar();
            }

            switch (d)
            {
                case '1':
                resuldado = Suma(a,b);
                ResultadoOp(resuldado);
                break;

                case '2':
                resuldado = Resta(a,b);
                ResultadoOp(resuldado);
                break;

                case '3':
                resuldado = Multiplicacion(a,b);
                ResultadoOp(resuldado);
                break;

                case '4':
                resuldado = Divicion(a,b);
                ResultadoOp(resuldado);
                break;

                case '5':
                resuldado = Raiz_Cuarada(a);
                ResultadoOp(resuldado);
                break;

                case '6':
                fin =0;
                printf("Preciona Enter para salir, Adios..");
                getchar();
                getchar();
                break;
            }
        } while (fin);

}

// Funciones
void valor(double *a, double *b)
{
    printf("introduce el valor del primer termino");
    scanf("%lf",a);
    printf("introduce el valor del segundo termino");
    scanf("%lf",b);
}

double Suma(double a,double b)
{
    double c;
    valor(&a,&b);
    c= a+b;
    return(c);
}

double Resta(double a, double b)
{
    double c;
    valor(&a,&b);
    c= a-b;
    return(c);
}

double Multiplicacion(double a, double b)
{
    double c;
    valor(&a,&b);
    c= a*b;
    return(c);
}

double Divicion(double a, double b)
{
    double c;
    valor(&a,&b);
    c= a/b;
    return(c);
}

double Raiz_Cuarada(double a)
{ double c;
    printf("Introduzca la cifra a la que efectuar la raiz");
    scanf("%lf",a);
    c= sqrt(a);
    return(c);
}

double menu()
{
    //clrscr();
    printf("\n\n\nBienvenido al programa de CALCULADORA");
    printf("\tIntroduce una de las sig. opciones");
    printf("\n\n\t\t1- Suma");
    printf("\n\n\t\t2- Resta");
    printf("\n\n\t\t3- Multiplicación");
    printf("\n\n\t\t4- Divición");
    printf("\n\n\t\t5- Raiz Cuadrada");
    printf("\n\n\t\t6- Salir");
    printf("\t\tEliga una opción");

}

double ResultadoOp(double resuldado)
{
     printf("\nEl resultado de la opcion elegida es: %.2lf",resuldado);
getchar();
return(resuldado);

}
