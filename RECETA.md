# Receta: El mayor de tres números
1. MOSTRAR "Bienvenido a mi programa"
2. primero ← leerDecimal("Escribe el primer numero: ")
   segundo ← leerDecimal("Escribe el segundo numero: ")
   tercero ← leerDecimal("Escribe el tercer numero: ")
3. SI primero >= segundo Y primero >= tercero ENTONCES
       mayor ← primero
   SINO SI segundo >= primero Y segundo >= tercero ENTONCES
       mayor ← segundo
   SINO
       mayor ← tercero
   FIN SI
4. MOSTRAR "El mayor de los tres numeros es: ", mayor
5. FIN