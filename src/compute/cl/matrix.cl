
// A is a m*n matrix
// B is a n*p matrix
// C is a m*p matrix
__kernel void matrix_mult(
	__global float *a,
	__global float *b,
	__global float *c,
	const int n,
    const int p)
{
	int i = get_global_id(0);
	int j = get_global_id(1);
    float value = 0.f;
	for (int k = 0; k < n; k++) {
        value += a[i * n + k] * b[k * p + j];
	}
    c[i * p + j] = value;
}

