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

// DEFINICION DE ESTRUCTURAS
struct TIPOVENDEDORES{
    int codigoVendedor;
    char apellido[dimChar];
    char nombre[dimChar];
    int anio;
    int codigoSucursal;
};
struct TIPOVENTAMENSUAL{
    int codigoVenta;
    float montoVenta;
    char rubro[dimChar];
};
struct TIPOSUCURSALES{
    int codigoSucursal;
    char nombreSucursal[dimChar];
    char provincia[dimChar];
};
// DEFINICION DE ALIAS
typedef struct TIPOVENDEDORES VENDEDOR;
typedef struct TIPOVENTAMENSUAL VENTAMENSUAL;
typedef struct TIPOSUCURSALES SUCURSAL;



int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

