#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMANAS 4

void mensajeBienvenida(){
    printf("\n\t\t Bienvenido a la aplicaci%cn para registrar las ventas en las casetas,\n\t\t esperamos que haya disfrutado la feria del libro.", 162);
    printf("\n\t\t Pulse <Intro> para continuar..");
    getch();
    system("cls");
}

void mensajeDespedida(){
    printf("\n\t\t Gracias por usar la aplicaci�n para registrar las ventas en las casetas,\n\t\t esperamos que haya disfrutado la feria del libro.");
    printf("\n\t\t Pulse <Intro> para finalizar..");
    getch();
    system("cls");
    return 0;
}

float totalImporteCaseta(int ventas[FILAS][COLUMANAS],float infomarcionCasetas[5]){

    const float precioLibro1 = 15.50, precioLibro2 = 21.00, precioLibro3 = 10.50, precioLibro4 = 12.50;

    float ventasCaseta1 = ventas[0][0] + ventas[0][1] + ventas[0][2] + ventas[0][3];
    float ventasCaseta2 = ventas[1][0] + ventas[1][1] + ventas[1][2] + ventas[1][3];
    float ventasCaseta3 = ventas[2][0] + ventas[2][1] + ventas[2][2] + ventas[2][3];

    float totalCaseta1 = ventas[0][0] * precioLibro1 + ventas[0][1] * precioLibro2 + ventas[0][2]* precioLibro3 + ventas[0][3] * precioLibro4;
    float totalCaseta2 = ventas[1][0] * precioLibro1 + ventas[1][1] * precioLibro2 + ventas[1][2]* precioLibro3 + ventas[1][3] * precioLibro4;
    float totalCaseta3 = ventas[2][0] * precioLibro1 + ventas[2][1] * precioLibro2 + ventas[2][2]* precioLibro3 + ventas[2][3] * precioLibro4;

    infomarcionCasetas[0] = ventasCaseta1;
    infomarcionCasetas[1] = ventasCaseta2;
    infomarcionCasetas[2] = ventasCaseta3;
    infomarcionCasetas[3] = totalCaseta1;
    infomarcionCasetas[4] = totalCaseta2;
    infomarcionCasetas[5] = totalCaseta3;





}

void mostrarInformeVentasCaseta(float infomarcionCasetas[5]){

    printf("%.0f\n", infomarcionCasetas[0]);
    printf("%.0f\n", infomarcionCasetas[1]);
    printf("%.0f\n", infomarcionCasetas[2]);
    printf("%f\n", infomarcionCasetas[3]);
    printf("%f\n", infomarcionCasetas[4]);
    printf("%f\n", infomarcionCasetas[5]);

    printf("\n\t\t\tINFORME DE VENTAS (Importe total/caseta (Euros))");
    printf("\n\t\t\t================================================\n");
    printf("\n\t\tLibro 1  Libro 2 Libro 3 Libro 4");
    printf("\n\t\tPrecio(euros):  %2.2f  %2.2f    %2.2f  %2.2f");
    printf("\n============================================================================\n");
    printf("\n\tCaseta Libro 1 (euros) Libro 2 (euros) Libro 3 (euros) Libro 4 (euros) Total (euros)");
    printf("\n\t   1 %f %f  %f  %f  %f ");
    printf("\n\t   2 %f %f  %f  %f  %f ");
    printf("\n\t   3 %f %f  %f  %f  %f ");
    printf("\n\t   ------------------------------------------------------------------- ");
    printf("\n\tTOTALES: %f %f %f %f ");
    printf("\n\t   ------------------------------------------------------------------- ");

    printf("\n\t\t Pulse <Intro> para continuar..");
    getch();
    system("cls");
}

void registrarVentasCasetas(int ventas[FILAS][COLUMANAS]){

    for(int i = 0;i<FILAS;i++){
        printf("\n\t\t Registro Ventas Caseta %d",i+1);
        printf("\n\t\t ======================");
        printf("\n\t\t Por favor: Introduzca en numero las unidades vendidas por cada libro\n");

        for(int j= 0;j<COLUMANAS;j++){
            printf("\n\t\t Libro %d: ",j+1);
            fflush(stdin);
            scanf("%d",&ventas[i][j]);
            fflush(stdin);
        }
        printf("\n\t\t Pulse <intro> para continuar...");
        getch();
        system("cls");
    }


}

void informeGeneralVentas(int ventas[FILAS][COLUMANAS]){

    printf("\n\t Informe General de Ventas(unidades vendidas)\n");
    printf("\n\t\t Caseta\t\t Libro 1\t Libro 2\t Libro 3\t Libro 4");
    printf("\n\t\t =======================================================================");

    for(int i=0;i<FILAS;i++){

        printf("\n\t\t %d",i    +1);
        for(int j=0;j<COLUMANAS;j++){
        printf("\t\t %d",ventas[i][j]);

        }
    }
    printf("\n\n\t\t Pulse <intro> para continuar...");
    getch();
    system("cls");

}

void mostrarInformeVentasLibros(int ventas[FILAS][COLUMANAS],char libros[][99]){

    //Variables

    int resultado = 0;

    //Cabecera
    printf("\n\tINFORME DE VENTAS (Unidades vendidas de cada libro)\n\n");
    printf("\n\t Libro \t\t\t\tCaseta 1 \tCaseta 2 \tCaseta 3 \t       Total ");
    printf("\n\t =====================================================================================================\n");

    for(int i=0;i<COLUMANAS;i++){
        printf("\n\t%-16s",libros[i]);
        resultado = 0;

        for(int j=0;j<FILAS;j++){

            printf("\t\t%2.d",ventas[j][i]);
            resultado = ventas[j][i] + resultado;

        }
        printf("\t\t\t%d",resultado);

    }

        printf("\n\t\t Pulse <intro> para continuar...");
        getch();
        system("cls");

}

void listarLibros(char libros[][99]){

    printf("\n\tLISTADO GENERAL DE LIBROS\n\n");
    printf("\n\t=========================\n");

        for(int i=0;i<COLUMANAS;i++){
        printf("\n\t%-16s",libros[i]);
        }
        printf("\n\t\t Pulse <intro> para continuar...");
        getch();
        system("cls");



}

void pasarMayuscLetrasPosImpares(char libros[][99]){



    int x, y;
    for(x = 0; x <= 3; ++x ){
        for(y = 1; y <= sizeof(libros[x]) ; y = y+2){
        libros[x][y] = toupper(libros[x][y]);
        }
    }
    printf("%s\n", libros[0]);
    printf("%s\n", libros[1]);
    printf("%s\n", libros[2]);
    printf("%s\n", libros[3]);

    printf("\n\t\t Pulse <intro> para continuar...");
        getch();
        system("cls");
}

void pasarMayuscUltLetra(char libros[][99]){

    int x;

    for(x = 0; x <= 3; ++x){

    libros[x][strlen(libros[x]) - 1] = toupper(libros[x][strlen(libros[x]) - 1]);
    }

    printf("%s\n", libros[0]);
    printf("%s\n", libros[1]);
    printf("%s\n", libros[2]);
    printf("%s\n", libros[3]);

    printf("\n\t\t Pulse <Intro> para continuar..");
    getch();
    system("cls");
}

void restaurarTitulos(char libros[][99]){

    int x, y;

    for(x = 0; x<=3; ++x){
        libros[x][0] = toupper(libros[x][0]);
        for(y = 1; y <= sizeof(libros[x]) ; ++y){
        libros[x][y] = tolower(libros[x][y]);
            }
    }

    printf("%s\n", libros[0]);
    printf("%s\n", libros[1]);
    printf("%s\n", libros[2]);
    printf("%s\n", libros[3]);

    printf("\n\t\t Pulse <Intro> para continuar..");
    getch();
    system("cls");
}

void mostrarMenu(float ventas[FILAS][COLUMANAS],char libros[][99],float infomarcionCasetas[5]){

    int opcion;


    printf("\n\t\t Menu Principal");
    printf("\n\t\t ==============");

    printf("\n\t\t 1.Informe General de Ventas");
    printf("\n\t\t 2.Unidades Vendidas de cada libro");
    printf("\n\t\t 3.Importe total vendido en cada caseta");
    printf("\n\t\t 4.Pasar a mayuscula letras posiciones imapres de los titulos");
    printf("\n\t\t 5.Pasar a mayuscula la ultima letra de los");
    printf("\n\t\t 6.Restaurar Titulos");
    printf("\n\t\t 0.Salir");
    printf("\n\t\t Elige una opci�n [0,1,2,3,4,5 o 6] \n\t\t ");
    scanf("%i", &opcion);

    while(opcion<0 || opcion>6){
            printf("\n\t\t No es una opci�n valida, vuelva a introducir la opci�n a elegir \n\t\t ");
            scanf("%i", &opcion);
            fflush(stdin);
    }

     switch(opcion){
        case 1: system("cls");
                printf("\n\t\t 1.-Informe General de Ventas \n ");
                printf("\t\t ------------------ \n\n");
                informeGeneralVentas(ventas);
                mostrarMenu(ventas,libros,infomarcionCasetas);
                break;

        case 2: system("cls");
                printf("\n\t\t 2.-Unidades Vendidas de cada libro \n ");
                printf("\t\t -------------------- \n\n");
                mostrarInformeVentasLibros(ventas,libros);
                mostrarMenu(ventas,libros,infomarcionCasetas);
                break;

        case 3: system("cls");
                printf("\n\t\t 3.-Importe total vendido en cada caseta \n ");
                printf("\t\t ----------------------------------- \n\n");
                totalImporteCaseta(ventas,infomarcionCasetas);
                mostrarInformeVentasCaseta(infomarcionCasetas);
                mostrarMenu(ventas,libros,infomarcionCasetas);
                break;

        case 4: system("cls");
                printf("\n\t\t 4.-Pasar a mayuscula letras posiciones imapres de los titulos \n ");
                printf("\t\t ----------------------------------- \n\n");
                pasarMayuscLetrasPosImpares(libros);
                listarLibros(libros);
                mostrarMenu(ventas,libros,infomarcionCasetas);
                break;

        case 5: system("cls");
                printf("\n\t\t 5.-Pasar a mayuscula letras posiciones imapres de los titulos \n ");
                printf("\t\t ----------------------------------- \n\n");
                pasarMayuscUltLetra(libros);
                listarLibros(libros);
                mostrarMenu(ventas,libros,infomarcionCasetas);
                break;

        case 6: system("cls");
                printf("\n\t\t 6.-Restaurar t�tulos \n ");
                printf("\t\t ----------------------------------- \n\n");
                restaurarTitulos(libros);
                mostrarMenu(ventas,libros,infomarcionCasetas);
                break;

        case 0: system("cls");
                printf("\n\t\t 0.-Salir \n ");
                printf("\t\t -------- \n\n");
                mensajeDespedida();
                break;

}
}


int main(){

    int ventas[FILAS][COLUMANAS];

    char libros[][99]={"Libro de la vida","El castillo interior","Las fundaciones","Escritos menores"};

    float infomarcionCasetas[5];

    mensajeBienvenida();

    registrarVentasCasetas(&ventas);


    mostrarMenu(ventas,libros,infomarcionCasetas);

}
