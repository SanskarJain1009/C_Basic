#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void main()
{
    int a;
    int *j=&a;
    printf("Enter value for a =\n");
    scanf("%d", &a);

    
    printf("Value of a is =%d\n", a);
    printf("Value of a is (by using pointer)=%d\n", *j);
    printf("Address of a is(By Ampersand)= %d\n", &a);
    printf("Address of a is (By using Pointer)= %u\n", j);
    printf("Actual value stored in pointer i.e. Address of input=%d\n", *(&j));
    int **k;
    k=&j;
    printf("Address of pointer used above by using double ** pointer=%u", k);

    getch();
}