
// FIXME: compiles on darwin?
#include "compute/compute.h"

#include <CL/cl.h>

int cmp_init ()
{
    cl_uint numPlatforms = 0;
    cl_platform_id id;
    cl_int err = clGetPlatformIDs(0, &id, &numPlatforms);
    
    if (err == CL_SUCCESS) {

    } else {
        
    }
}

cmp_mat_t *cmp_mat_mult (cmp_mat_t *a, cmp_mat_t *b)
{
    
}

