#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

struct VectorC;

typedef struct VectorC * Vector;

// Función para crear un vector de enteros vacío
Vector int_vector_create(int size);


// Función para liberar la memoria utilizada por un vector de enteros
void int_vector_destroy(Vector vec);

// Función para cargar un vector de enteros de forma manual
void int_vector_manual_load(Vector vec);

// Función para cargar un vector de enteros de forma aleatoria
void int_vector_random_load(Vector vec);

// Función para mostrar un vector de enteros
void int_vector_display(Vector vec);

// Función para mostrar un vector de enteros en forma invertida
void int_vector_display_reverse(Vector vec);

// Función para contar la cantidad de pares en un vector de enteros
int int_vector_count_even(Vector vec);

// Función para calcular el módulo de un vector de enteros
float int_vector_modulus(Vector vec);

// Función para buscar la posición del valor máximo en un vector de enteros
int int_vector_max_index(Vector vec);

// Función para buscar la posición del valor mínimo en un vector de enteros
int int_vector_min_index(Vector vec);
// Función para ordenar un vector de enteros por el método de burbujeo
void int_vector_bubble_sort(Vector vec);

// Función para sumar dos vectores de enteros
Vector int_vector_add(Vector vec1, Vector vec2);
// Función para realizar la multiplicación escalar de dos vectores de enteros
int int_vector_dot_product(Vector vec1, Vector vec2);

// Función para realizar una búsqueda secuencial en un vector de enteros
int int_vector_linear_search(Vector vec, int value);




#endif // VECTORES_H_INCLUDED
