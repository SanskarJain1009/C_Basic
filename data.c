#include<stdio.h>

int main()
{
    char name[15];
    int a, b, c, x, y;
    char name2[15];
    int d, e, f;
    int p;
    printf("Assign either number 1 for first entry and 2 for second\n");
    printf("Assign Number -\n");
    scanf("%d", &x);
    printf("Enter your name-\n");
    scanf("%s", &name);
    printf("Enter your age-\n");
    scanf("%d", &a);
    printf("Enter your Percantage obtained in 10th-\n");
    scanf("%d", &b);
    printf("Enter your Percentage obtained in 12th-\n");
    scanf("%d", &c);
    
    printf("Assign Number -\n");
    scanf("%d", &y);
    printf("Enter your name-\n");
    scanf("%s", &name2);
    printf("Enter your age-\n");
    scanf("%d", &d);
    printf("Enter your Percantage obtained in 10th-\n");
    scanf("%d", &e);
    printf("Enter your Percentage obtained in 12th-\n");
    scanf("%d", &f);  
    
    printf("Enter Assigned number-\n");
    scanf("%d", &p);
    
    switch(p)
    {
        case 1 : 
        printf("Details are-\nYour name- %s\n Your age is- %d\n Your 10th percentage is- %d\n Your 12th percentage is- %d\n", name, a, b, c);
        
        case 2 :  
        printf("Details are-\nYour name- %s\n Your age is- %d\n Your 10th percentage is- %d\n Your 12th percentage is- %d\n", name2, d, e, f);
        
        dafault : printf("Invalid");

    }
        getwchar();
        return 0;
        
}