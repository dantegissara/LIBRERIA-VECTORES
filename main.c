#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vectores.h"

int main()
{
    srand(time(NULL));
    Vector v1 = int_vector_create(5);
    int_vector_manual_load(v1);
    int_vector_display(v1);


    return 0;
}
