
__kernel void vector_add(
    __global float *a,
    __global float *b,
    __global float *c,
    const uint count)
{
    int i = get_global_id(0);   
    if (i < count) {
        c[i] = a[i] + b[i];
    }
}

__kernel void vector_mult(
	__global float *a,
	__global float *b,
	__global
