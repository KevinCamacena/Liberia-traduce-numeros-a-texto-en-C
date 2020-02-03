# Liberia-traduce-numeros-a-texto-en-C
Esta libreria brinda cuatro funciones que nos sirven para traducir npumeros a texto.
Las cuatro funciones antes mencionadas son:

void convierte_numero_a_texto_hasta_99(char*, int*);

void convierte_numero_a_texto_hasta_999(char*, int*);

void convierte_numero_a_texto_hasta_99999(char*, int*);

void convierte_numero_a_texto_hasta_999999(char*,int*);


# ¿Cómo usar cada función?
Podemos invocar a cada función de manera independiente. 

La función requiere de dos parámetros. El primero parámetro es un arreglo de caracteres o una cadena de texto. Este arreglo de caracteres servirá para guardar el número traducido. Mientras que el segundo parámetro servirá para almacenar un arreglo de números, este arreglo de números será el número a traducir. El arreglo de números tendrá el siguiente orden { menos significativo, …, más significativo} .

void convierte_numero_a_texto_hasta_x(numero_texto,numero_arreglo);
