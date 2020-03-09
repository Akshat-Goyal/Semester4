#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

struct timespec start, end;
typedef struct Matrix
{
    int matrix[5000][5000];
}Matrix;

Matrix *matrix_multiply(Matrix *a,Matrix *b,int p,int q,int r)
{
    Matrix *result;
    result=malloc(sizeof(Matrix));
 
    
    register int factor=15;
    register int z=r-r%factor-factor;
    register int i=0,k=0,j=0;
    register int *point=&(b->matrix[0][0]);
    int temparr[5000]={0}, temp[5000];
    for( i=0;i<p;i++)
    {
        int temp[5000]={0};
        memcpy(temp, temparr, 5000*4);
        for( k=0;k<q;k++)
        {
            point=&(b->matrix[k][0]);
            register int cache_var=a->matrix[i][k];
            for( j=0;j<=z;j+=15)
            {
                temp[j]+=cache_var*(*point++);
                temp[j+1]+=cache_var*(*point++);
                temp[j+2]+=cache_var*(*point++);
                temp[j+3]+=cache_var*(*point++);
                temp[j+4]+=cache_var*(*point++);
                temp[j+5]+=cache_var*(*point++);
                temp[j+6]+=cache_var*(*point++);
                temp[j+7]+=cache_var*(*point++);
                temp[j+8]+=cache_var*(*point++);
                temp[j+9]+=cache_var*(*point++);
                temp[j+10]+=cache_var*(*point++);
                temp[j+11]+=cache_var*(*point++);
                temp[j+12]+=cache_var*(*point++);
                temp[j+13]+=cache_var*(*point++);
                temp[j+14]+=cache_var*(*point++);
            }

            for( j=z+15;j<r;j++)
            {
                temp[j]+=cache_var*(*point++);
            }
        }
        
        
        memcpy(&(result->matrix[i]), temp, r*4);
       
    }    
    // for (int i = 0; i < p; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         printf("%d ", result->matrix[i][j]);
    //     }
    //     printf("\n");
        
    // }
    
    return result;
}
int main()
{
    Matrix *a, *b;
    a=malloc(sizeof(Matrix));
    b=malloc(sizeof(Matrix));
    int p=5000, q=5000, r=5000 ;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            // a->matrix[i][j]=1;
            a->matrix[i][j]=1;
            // printf("%d ",a->matrix[i][j]);
        }
        // printf("\n");
    }
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < r; j++)
        {
            // b->matrix[i][j]=1;
            b->matrix[i][j]=1;
            // printf("%d ",b->matrix[i][j]);
        }
        // printf("\n");
    }
    //    for (int i = 0; i < q; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         // b->matrix[i][j]=1;
    //         // c->matrix[i][j]=1;
    //         printf("%d ",->matrix[i][j]);
    //     }
    //     // printf("\n");
    // }
    clock_gettime(CLOCK_MONOTONIC, &start);
    
    matrix_multiply(a, b,p, q, r);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double tdiff = (end.tv_sec - start.tv_sec)+ 1e-9*(end.tv_nsec - start.tv_nsec);
    printf("time %f\n",  tdiff);     
    // scanf("")
    return 0;
}