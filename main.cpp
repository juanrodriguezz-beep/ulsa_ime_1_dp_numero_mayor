// Práctica 5: El mayor de tres números
// Traduce TU receta de RECETA.md a C++, paso por paso.
// Deja el comentario "// Paso N" sobre cada bloque, con la numeración de TU receta.

// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿Qué función de utilerias.h vas a usar? ¿Por qué esa y no la otra?
#include "utilerias.h"

int main() {
      // Variables (siempre inicializadas)
    double primero = 0.0;
    double segundo = 0.0;
    double tercero = 0.0;
    double mayor = 0.0;
 
    // Variables (siempre inicializadas)
    // TODO: ¿cuántas necesitas? ¿De qué tipo? ¿Necesitas alguna además de los tres números?

    // Paso 1: mensaje de bienvenida
    // TODO
 std::cout << "Programa: el mayor de tres numeros" << std::endl;
    // TODO: el resto de tu receta, paso por paso.
    //       ¿Tu decisión necesita una cadena if / else if / else o varios if independientes?
    //       ¿Qué pasa con tu código si dos números son iguales?
     // Paso 2: pedir los tres números (leerDecimal acepta enteros y decimales)
    primero = leerDecimal("Escribe el primer numero: ");
    segundo = leerDecimal("Escribe el segundo numero: ");
    tercero = leerDecimal("Escribe el tercer numero: ");
 // Paso 3: decidir cuál es el mayor
    // Se usa >= para que, en un empate, siempre se entre a algún camino.
    if (primero >= segundo && primero >= tercero) {
        mayor = primero;
    } else if (segundo >= primero && segundo >= tercero) {
        mayor = segundo;
    } else {
        mayor = tercero;
    }
 
    // Paso 4: mostrar el resultado
    std::cout << "El mayor de los tres numeros es: " << mayor << std::endl;
 
    return 0;
}