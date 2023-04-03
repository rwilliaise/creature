
#ifndef CREATURE_COMPUTE_H
#define CREATURE_COMPUTE_H

typedef struct cmp_mat {
    int m, n;
    float data[0];
} cmp_mat_t;

typedef struct cmp_vec {
    int m;
    float data[0];
} cmp_vec_t;

int cmp_init ();

cmp_mat_t *cmp_mat_create (int m, int n);
cmp_mat_t *cmp_mat_mult (cmp_mat_t *a, cmp_mat_t *b);

#endif // CREATURE_COMPUTE_H
