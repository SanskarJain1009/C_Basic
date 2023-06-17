#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

void read_array(int (*A)[3])
{
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", (*(A + i) + j));}}
}

void print_array(int (*A)[3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t", (*(*(A + i) + j)));
        }
        printf("\n");
    }
}

void add_matrix(int (*A)[3], int (*B)[3], int (*C)[3])
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            (*(*(C + i) + j)) = (*(*(A + i) + j)) + (*(*(B + i) + j));
        }
    }
}

void main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;
    
    printf("Enter the elements of first matrix:\n" );
    read_array(A);    
    printf("Enter the elements of second matrix:\n" );
    read_array(B);
    printf("Elements of first matrix:\n");
    print_array(A);
    printf("Elements of second matrix:\n");
    print_array(B);

    add_matrix(A, B, C);
    printf("Sum of two matrix is:\n");
    print_array(C);
}
