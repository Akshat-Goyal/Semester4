#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct Matrix
{
	int matrix[5000][5000];
} Matrix;

Matrix *matrix_multiply(Matrix *a, Matrix *b, int p, int q, int r)
{

	Matrix *result;
	result = malloc(sizeof(Matrix));

	register int i, j, k, x, *pb = NULL, *pr = result->matrix[0];
	memset(pr, 0, p * r * sizeof(int));
	for (i = 0; i < p; i++)
	{
		for (k = 0; k < q; k++)
		{
			pb = b->matrix[k];
			x = a->matrix[i][k];
			pr = result->matrix[i];
			for (j = 0; j < r - 15; j += 16)
			{
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
				*pr++ += x * (*pb++);
			}
			for (; j < r; j++)
			{
				*pr++ += x * (*pb++);
			}
		}
	}
	return result;
}

Matrix a, b, *c;
int main()
{
	int p, q, r;
	scanf("%d%d%d", &p, &q, &r);
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
			a.matrix[i][j] = rand();
	}
	for (int i = 0; i < q; i++)
	{
		for (int j = 0; j < r; j++)
			b.matrix[i][j] = rand();
	}
	struct timespec start, end;
	clock_gettime(CLOCK_MONOTONIC, &start);
	c = matrix_multiply(&a, &b, p, q, r);
	clock_gettime(CLOCK_MONOTONIC, &end);
	double timeTaken = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) * 1e-9;
	printf("%f\n", timeTaken);
	return 0;
}