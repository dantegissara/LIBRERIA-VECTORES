#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vectores.h"
#include <math.h>

struct VectorC{
    int *data;
    int size;
};


// Funci�n para crear un vector de enteros vac�o
Vector int_vector_create(int size) {
  Vector vec = malloc(sizeof(struct VectorC));
  vec->data = malloc(size * sizeof(int));
  vec->size = size;
  return vec;
}

// Funci�n para liberar la memoria utilizada por un vector de enteros
void int_vector_destroy(Vector vec) {
  free(vec->data);
  free(vec);
}

// Funci�n para cargar un vector de enteros de forma manual
void int_vector_manual_load(Vector vec) {
  printf("Ingrese %d numeros enteros:\n", vec->size);
  for (int i = 0; i < vec->size; i++) {
    scanf("%d", &vec->data[i]);
  }
}

// Funci�n para cargar un vector de enteros de forma aleatoria
void int_vector_random_load(Vector vec) {

  for (int i = 0; i < vec->size; i++) {
    vec->data[i] = rand() % 100;
  }
}

// Funci�n para mostrar un vector de enteros
void int_vector_display(Vector vec) {
  printf("[ ");
  for (int i = 0; i < vec->size; i++) {
    printf("%d ", vec->data[i]);
  }
  printf("]\n");
}

// Funci�n para mostrar un vector de enteros en forma invertida
void int_vector_display_reverse(Vector vec) {
  printf("[ ");
  for (int i = vec->size - 1; i >= 0; i--) {
    printf("%d ", vec->data[i]);
  }
  printf("]\n");
}

// Funci�n para contar la cantidad de pares en un vector de enteros
int int_vector_count_even(Vector vec) {
  int count = 0;
  for (int i = 0; i < vec->size; i++) {
    if (vec->data[i] % 2 == 0) {
      count++;
    }
  }
  return count;
}

// Funci�n para calcular el m�dulo de un vector de enteros
float int_vector_modulus(Vector vec) {
  float sum = 0;
  for (int i = 0; i < vec->size; i++) {
    sum += vec->data[i] * vec->data[i];
  }
  return sqrt(sum);
}

// Funci�n para buscar la posici�n del valor m�ximo en un vector de enteros
int int_vector_max_index(Vector vec) {
  int max = vec->data[0];
  int index = 0;
  for (int i = 1; i < vec->size; i++) {
    if (vec->data[i] > max) {
      max = vec->data[i];
      index = i;
    }
  }
  return index;
}

// Funci�n para buscar la posici�n del valor m�nimo en un vector de enteros
int int_vector_min_index(Vector vec) {
  int min = vec->data[0];
  int index = 0;
  for (int i = 1; i < vec->size; i++) {
    if (vec->data[i] < min) {
      min = vec->data[i];
      index = i;
    }
  }
  return index;
}

// Funci�n para ordenar un vector de enteros por el m�todo de burbujeo
void int_vector_bubble_sort(Vector vec) {
  for (int i = 0; i < vec->size - 1; i++) {
    for (int j = 0; j < vec->size - i - 1; j++) {
      if (vec->data[j] > vec->data[j + 1]) {
        int temp = vec->data[j];
        vec->data[j] = vec->data[j + 1];
        vec->data[j + 1] = temp;
      }
    }
  }
}

// Funci�n para sumar dos vectores de enteros
Vector int_vector_add(Vector vec1, Vector vec2) {
  if (vec1->size != vec2->size) {
    printf("Los vectores deben ser del mismo tama�o.\n");
    return NULL;
  }
  Vector sum = int_vector_create(vec1->size);
  for (int i = 0; i < vec1->size; i++) {
    sum->data[i] = vec1->data[i] + vec2->data[i];
  }
  return sum;
}

// Funci�n para realizar la multiplicaci�n escalar de dos vectores de enteros
int int_vector_dot_product(Vector vec1, Vector vec2) {
  if (vec1->size != vec2->size) {
    printf("Los vectores deben ser del mismo tama�o.\n");
    return -1;
  }
  int product = 0;
  for (int i = 0; i < vec1->size; i++) {
    product += vec1->data[i] * vec2->data[i];
  }
  return product;
}

// Funci�n para realizar una b�squeda secuencial en un vector de enteros
int int_vector_linear_search(Vector vec, int value) {
  for (int i = 0; i < vec->size; i++) {
    if (vec->data[i] == value) {
      return i;
    }
  }
  return -1;
}



