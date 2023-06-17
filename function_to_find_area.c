#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>
int square(int *a);
int rec(int *c, int *d);
float tri(float *a, float *b);
float cir(float *a);

void main()
{
    system("cls");
    int a, b, c, d;
    float e, f, r;
    printf("Enter Your Choice-\n");
    printf("1 for Square.\n");
    printf("2 for Rectangle.\n");
    printf("3 for Right Angles Triangle.\n");
    printf("4 for Circle.\n");
    scanf("%d", &a);

    switch(a)
    {
        case 1: printf("Enter Side of Square-\n");
                scanf("%d", &b);
                printf("Area is %d\n", square(&b));
                break;
        case 2: printf("Enter length of rectangle-\n");
                scanf("%d", &c);
                printf("Enter breadth of rectangle-\n");
                scanf("%d", &d);
                printf("Area is %d\n", rec(&c, &d));
                break;
        case 3: printf("Enter base of right angled triangle-\n");
                scanf("%f", &e);
                printf("Enter height of right angles triangle-\n");
                scanf("%f", &f);
                printf("Area is %.2f\n", tri(&e, &f));
                break;
        case 4: printf("Enter radius of square-\n");
                scanf("%f", &r);
                printf("Area is %.2f\n", cir(&r));
                break;
        default:printf("Your choice is invalid.");
                break;
    }
    getch();
}
int square (int *a){
    int c=*a;
    int d=c*c;
    return d;
}
int rec(int *c, int *d){
    int p=*c;
    int q=*d;
    int r=p*q;
    return r;
}
float tri(float *a, float *b){
    float p=*a;
    float q=*b;
    float r=0.5*p*q;
    return r;
}
float cir(float *a){
    float c=*a;
    float d=3.14*c*c;
    return d;
}
