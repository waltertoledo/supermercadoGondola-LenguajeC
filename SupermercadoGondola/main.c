/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Walter Toledo
 *
 * Created on 17 de abril de 2017, 21:40
 */

#include <stdio.h>
#include <stdlib.h>
#define dimChar 20
#define dimVend 10
#define dimVenMen 10
#define dimSuc 10

// DEFINICION DE ESTRUCTURAS

struct TIPOVENDEDORES {
    int codigoVendedor;
    char apellido[dimChar];
    char nombre[dimChar];
    int anio;
    int codigoSucursal;
};

struct TIPOVENTAMENSUAL {
    int codigoVenta;
    float montoVenta;
    char rubro[dimChar];
};

struct TIPOSUCURSALES {
    int codigoSucursal;
    char nombreSucursal[dimChar];
    char provincia[dimChar];
};
// DEFINICION DE ALIAS
typedef struct TIPOVENDEDORES VENDEDOR;
typedef struct TIPOVENTAMENSUAL VENTAMENSUAL;
typedef struct TIPOSUCURSALES SUCURSAL;
// DEFINICION DE PROTOTIPOS
void menu(SUCURSAL S[], int dimS, VENDEDOR V[], int dimV, VENTAMENSUAL VM[], int dimVM);

int main(int argc, char** argv) {
    int dimS=-1,dimV=-1,dimVM=-1;
    SUCURSAL s[dimSuc];
    VENDEDOR v[dimVend];
    VENTAMENSUAL vm[dimVenMen];
    menu(s,dimS,v,dimV,vm,dimVM);
    
    return (EXIT_SUCCESS);
}

void menu(SUCURSAL S[], int dimS, VENDEDOR V[], int dimV, VENTAMENSUAL VM[], int dimVM) {
    int opcion = -1;
    do {
        printf("\n----------------------------------");
        printf("\n---------MENU DE OPCIONES---------");
        printf("\n----------------------------------");
        printf("\n1. CONSULTAS POR VENDEDOR         ");
        printf("\n2. VENTAS MENSUALES POR SUCURSAL  ");
        printf("\n0. FINALIZAR PROGRAMA             ");
        printf("\n----------------------------------");
        printf("\n   INGRESE UNA OPCION:  ");
        scanf("%d",&opcion);
        switch (opcion) {
            case 1:break;
            case 2:break;
            case 0:opcion = 0;
                break;
            default: printf("\nOpcion Ingresada Incorrecta\n");
                break;
        }
    } while (opcion != 0);

}