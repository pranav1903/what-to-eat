#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number from 1 to 5 : ");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1: printf("\nFood item - Sushi \nPrice - Rs 500");
                break;
        case 2: printf("\nFood item - Sandwich \nPrice - Rs 250");
                break;
        case 3: printf("\nFood item - Burger \nPrice - Rs 75");
                break;
        case 4: printf("\nFood item - Pasta \nPrice - Rs 370");
                break;
        case 5: printf("\nFood item - Pizz  \nPrice - Rs 4");
                break;
        default:
                printf("\nInvalid choice ");
    }
    
    return(0);
}
