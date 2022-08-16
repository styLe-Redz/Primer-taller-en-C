
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ncurses.h>

/*Función que calcula el producto de dos numeros enteros*/
void multiplicacion(){
    int numeroUno, numeroDos, resultado;
    printf("Introduzca el primer entero: ");
    scanf("%d", &numeroUno);
    printf("Introduzca el segundo entero: ");
    scanf("%d", &numeroDos);
    resultado = numeroDos * numeroUno;
    printf("Producto de los dos enteros anteriores: %d \n", resultado);
}

/*Función para convertir los dias especificados en años, semanas y dias*/
void numeroDias(){
    int dato, dias, años, semanas;
    printf("Numero de dias: ");
    scanf("%d", &dato);
    años = dato/365;
    semanas = (dato%365)/7;
    dias = (dato % 365)%7;
    printf("Años %d \n", años);
    printf("Semanas %d \n", semanas);
    printf("Dias %d \n", dias);
}

/*Función para obtener la distancia entre dos puntos*/
void distanciaPuntos(){
    float x1, x2, y1, y2, distancia;
    printf("Entrada x1: ");
    scanf("%f", &x1);
    printf("Entrada y1: ");
    scanf("%f", &y1);
    printf("Entrada x2: ");
    scanf("%f", &x2);
    printf("Entrada y2: ");
    scanf("%f", &y2);
    distancia = sqrt (pow((x2-x1),2) + pow((y2-y1),2));
    printf("Distancia de dichos puntos: %f \n", distancia);
}


/*Función que muestra los primeros 10 numeros naturales*/
void numerosNaturales(){
    for (int i = 1; i < 11; i++){
        printf(" %d", i);
    }
    printf("\n");
}

//>
/*Funcion que muestra un triangulo rectangulo dependiendo de la cantidad de niveles que se le indique*/
void trianguloRectangulo(){
    int lineas;
    printf("Cantidad de lineas: ");
    scanf("%d", &lineas);
    if(lineas<14){
        for (int i = 0; i < lineas; i++){
            for (int j = 0; j < i+1; j++){
                printf("*");       
            }
            printf("\n");
        }
    }
}

/*Funcion de inicializa una matriz NxN con unos (1) y la muestra por pantalla*/
void realizarMatriz(){
    int dimension;
    printf("Tamaño de la matriz: ");
    scanf("%d", &dimension);
    if (dimension<8){
        int matriz[dimension][dimension];
        for (int i = 0; i < dimension; i++){
            for (int j = 0; j < dimension; j++){
                matriz[i][j]=1;
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }    
    }
}

/*Funcion que inicializa una matriz con numeros aleatorios*/
void numerosAleatorios(){
    int dimension;
    printf("Tamaño de la matriz: ");
    scanf("%d", &dimension);
    if (dimension<8){
        int matriz[dimension][dimension];
        for (int i = 0; i < dimension; i++){
            for (int j = 0; j < dimension; j++){
                matriz[i][j]=rand() % 10;
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }    
    }
}

/*Funcion para imprimir matrices y ahorrar codigo*/
void imprimirMatriz(int a[][7], int dimension){
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            printf(" [%d] ", a[i][j]);
        }
        printf("\n");
    }
}


/*Funcion que realiza la suma de dos matrices*/
void sumaMatrices(){
    //Se inicializan las matrices aleatoriamente
    srand(time(NULL));
    int dimension = rand() % 9;
    int matrizA[dimension][dimension];
    int matrizB[dimension][dimension];
    int matrizC[dimension][dimension];
    printf("Dimension de las matrices: %d\n", dimension);
    
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){//Se agregan valores aleatorios
            matrizA[i][j] = rand() % 9;
            matrizB[i][j] = rand() % 9;
        }
    }
    printf("Matriz A\n");
    imprimirMatriz(matrizA, dimension); //Se imprime la matrizA
    printf("Matriz B\n");    
    imprimirMatriz(matrizB, dimension); //Se imprime la matrizB

    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; //Suma
        }
    }
    printf("Resultado\n");
    imprimirMatriz(matrizC, dimension); //Se imprime la matrizC
}

/*Funcion que realiza la resta de dos matrices*/
void restaMatrices(){
    //Se inicializan las matrices aleatoriamente
    srand(time(NULL));
    int dimension = rand() % 9;
    int matrizA[dimension][dimension];
    int matrizB[dimension][dimension];
    int matrizC[dimension][dimension];
    printf("Dimension de las matrices: %d\n", dimension);
    
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){//Se agregan valores aleatorios
            matrizB[i][j] = rand() % 9;
            matrizA[i][j] = rand() % 9;
        }
    }
    printf("Matriz A\n");
    imprimirMatriz(matrizA, dimension); //Se imprime la matrizA
    printf("Matriz B\n");    
    imprimirMatriz(matrizB, dimension); //Se imprime la matrizB

    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j]; //Resta
        }
    }
    printf("Resultado\n");
    imprimirMatriz(matrizC, dimension); //Se imprime la matrizC
}

/*Funcion que realiza el producto de dos matrices*/
void  productoMatrices(){
    //Se inicializan las matrices aleatoriamente
    srand(time(NULL));
    int dimension = rand() % 9;
    int matrizA[dimension][dimension];
    int matrizB[dimension][dimension];
    int matrizC[dimension][dimension];
    printf("Dimension de las matrices: %d\n", dimension);
    
    for (int i = 0; i < dimension; i++){
        for (int j = 0; j < dimension; j++){//Se agregan valores aleatorios
            matrizB[i][j] = rand() % 9;
            matrizA[i][j] = rand() % 9;
        }
    }
    printf("Matriz A\n");
    imprimirMatriz(matrizA, dimension); //Se imprime la matrizA
    printf("Matriz B\n");    
    imprimirMatriz(matrizB, dimension); //Se imprime la matrizB

    for (int a = 0; a < dimension; a++) {
        for (int i = 0; i < dimension; i++) {
            int suma = 0;
            for (int j = 0; j < dimension; j++) {
                suma += matrizA[i][j] * matrizB[j][a]; // Multiplicamos y sumamos resultado
            }
            matrizC[i][a] = suma;
        }
    }

    printf("Resultado\n");
    imprimirMatriz(matrizC, dimension); //Se imprime la matrizC
}



