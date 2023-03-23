
// A is a m*n matrix
// B is a n*p matrix
// C is a m*p matrix
__kernel void matrix_mult(
	__global float *a,
	__global float *b,
	__global float *c,
	const int m,
	const int n,
	const int p)
{
	int i = get_global_id(0);
	int j = get_global_id(1);
	for (int k = 0; k < n; k++) {
		c[i * m + j] = a[i * m + k];
	}
}

