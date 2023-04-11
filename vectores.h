#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

struct VectorC;

typedef struct VectorC * Vector;

// Funci�n para crear un vector de enteros vac�o
Vector int_vector_create(int size);


// Funci�n para liberar la memoria utilizada por un vector de enteros
void int_vector_destroy(Vector vec);

// Funci�n para cargar un vector de enteros de forma manual
void int_vector_manual_load(Vector vec);

// Funci�n para cargar un vector de enteros de forma aleatoria
void int_vector_random_load(Vector vec);

// Funci�n para mostrar un vector de enteros
void int_vector_display(Vector vec);

// Funci�n para mostrar un vector de enteros en forma invertida
void int_vector_display_reverse(Vector vec);

// Funci�n para contar la cantidad de pares en un vector de enteros
int int_vector_count_even(Vector vec);

// Funci�n para calcular el m�dulo de un vector de enteros
float int_vector_modulus(Vector vec);

// Funci�n para buscar la posici�n del valor m�ximo en un vector de enteros
int int_vector_max_index(Vector vec);

// Funci�n para buscar la posici�n del valor m�nimo en un vector de enteros
int int_vector_min_index(Vector vec);
// Funci�n para ordenar un vector de enteros por el m�todo de burbujeo
void int_vector_bubble_sort(Vector vec);

// Funci�n para sumar dos vectores de enteros
Vector int_vector_add(Vector vec1, Vector vec2);
// Funci�n para realizar la multiplicaci�n escalar de dos vectores de enteros
int int_vector_dot_product(Vector vec1, Vector vec2);

// Funci�n para realizar una b�squeda secuencial en un vector de enteros
int int_vector_linear_search(Vector vec, int value);




#endif // VECTORES_H_INCLUDED
