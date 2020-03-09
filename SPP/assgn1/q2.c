#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BILLION 1E9

int L[100000000], R[100000000];

static void merge(register int *A, register int l, register int r)
{
    register int i, j, k, val, m, n1, n2, n1o, n2o;
    m = (l + r) >> 1;

    n1 = m - l;
    n2 = r - m;
    n1o = n1 - 15;
    n2o = n2 - 15;

    for (i = 0; i < n1o; i += 16)
    {
        val = l + i;
        L[i] = A[val];
        L[i + 1] = A[val + 1];
        L[i + 2] = A[val + 2];
        L[i + 3] = A[val + 3];
        L[i + 4] = A[val + 4];
        L[i + 5] = A[val + 5];
        L[i + 6] = A[val + 6];
        L[i + 7] = A[val + 7];
        L[i + 8] = A[val + 8];
        L[i + 9] = A[val + 9];
        L[i + 10] = A[val + 10];
        L[i + 11] = A[val + 11];
        L[i + 12] = A[val + 12];
        L[i + 13] = A[val + 13];
        L[i + 14] = A[val + 14];
        L[i + 15] = A[val + 15];
    }
    for (; i < n1; i++)
    {
        L[i] = A[l + i];
    }

    for (j = 0; j < n2o; j += 16)
    {
        val = m + j;
        R[j] = A[val];
        R[j + 1] = A[val + 1];
        R[j + 2] = A[val + 2];
        R[j + 3] = A[val + 3];
        R[j + 4] = A[val + 4];
        R[j + 5] = A[val + 5];
        R[j + 6] = A[val + 6];
        R[j + 7] = A[val + 7];
        R[j + 8] = A[val + 8];
        R[j + 9] = A[val + 9];
        R[j + 10] = A[val + 10];
        R[j + 11] = A[val + 11];
        R[j + 12] = A[val + 12];
        R[j + 13] = A[val + 13];
        R[j + 14] = A[val + 14];
        R[j + 15] = A[val + 15];
    }

    for (; j < n2; j++)
    {
        R[j] = A[m + j];
    }

    k = l;
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1 - 15)
    {
        A[k] = L[i];
        A[k + 1] = L[i + 1];
        A[k + 2] = L[i + 2];
        A[k + 3] = L[i + 3];
        A[k + 4] = L[i + 4];
        A[k + 5] = L[i + 5];
        A[k + 6] = L[i + 6];
        A[k + 7] = L[i + 7];
        A[k + 8] = L[i + 8];
        A[k + 9] = L[i + 9];
        A[k + 10] = L[i + 10];
        A[k + 11] = L[i + 11];
        A[k + 12] = L[i + 12];
        A[k + 13] = L[i + 13];
        A[k + 14] = L[i + 14];
        A[k + 15] = L[i + 15];

        k += 16;
        i += 16;
    }
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2 - 15)
    {
        A[k] = R[j];
        A[k + 1] = R[j + 1];
        A[k + 2] = R[j + 2];
        A[k + 3] = R[j + 3];
        A[k + 4] = R[j + 4];
        A[k + 5] = R[j + 5];
        A[k + 6] = R[j + 6];
        A[k + 7] = R[j + 7];
        A[k + 8] = R[j + 8];
        A[k + 9] = R[j + 9];
        A[k + 10] = R[j + 10];
        A[k + 11] = R[j + 11];
        A[k + 12] = R[j + 12];
        A[k + 13] = R[j + 13];
        A[k + 14] = R[j + 14];
        A[k + 15] = R[j + 15];
        j += 16;
        k += 16;
    }
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void divide(register int *A, register int l, register int r)
{
    register int i, j, tempVal, m, diff;
    diff = r - l;
    if (diff <= 1)
    {
        return;
    }
    if (diff < 50)
    {
        // insertion sort
        for (i = l + 1; i < r; i++)
        {
            tempVal = A[i];
            j = i - 1;
            while (j >= l && A[j] > tempVal)
            {
                A[j + 1] = A[j];
                j--;
            }
            A[j + 1] = tempVal;
        }
    }
    else
    {
        m = (l + r) >> 1;
        divide(A, l, m);
        divide(A, m, r);

        merge(A, l, r);
    }
}

int *merge_sort(register int *A, register int n)
{
    int *ret;
    ret = malloc(sizeof(int) * n);

    divide(A, 0, n);
    ret = A;
    return ret;
}

int ar[100000000];

int main()
{
    int n = 100000000;
    // scanf("%d", &n);
    for (int i = 0; i < n; i++)
        ar[i] = rand();
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    merge_sort(ar, n);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double timeTaken = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) * 1e-9;
    printf("%f\n", timeTaken);
    return 0;
}
