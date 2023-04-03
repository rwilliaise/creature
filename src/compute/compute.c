
#include "compute.h"

#include <stdlib.h>
#include <string.h>

cmp_mat_t *cmp_mat_create (int m, int n)
{
    cmp_mat_t *mat = malloc(sizeof(cmp_mat_t) + m * n * sizeof(float));

    mat->m = m;
    mat->n = n;
    memset(mat->data, 0, m * n * sizeof(float));
    
    return mat;
}
