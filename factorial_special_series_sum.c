#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int fac(int a);
void main()
{
    system("cls");
    int a;
    int b[a];
    printf("Enter the number till where you need the sum of series n!/n-\n");
    scanf("%d", &a);
    for (int i=1;i<=a; i++)
        {
            b[i]=fac(i);
        }
    
    float c[a];
    for(int j=1;j<=a;j++)
    {
    c[j]=b[j]/j;
    }
    float d=0;
    for(int k=1;k<=a;k++)
    {d=c[k]+d;}
    printf("Sum is %.2f", d);
    getch();
}
int fac(int x)
{
    if (x==1 || x==0)
    {return 1;}
    else
    {
        return x*fac(x-1);
    }
}
