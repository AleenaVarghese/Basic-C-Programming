#include <stdio.h>

int main()
{
    double currentprice;
    int miles;
    double cost;
    double usedgallon;
    
    printf("Please enter the current price of gas per gallon?");
    scanf("%lf", &currentprice);
    printf("Enter number of miles travelled in the trip");
    scanf("%d", &miles);
    usedgallon = miles/23;
    printf("Total usedgallon in the trip = %lf",usedgallon);
    printf("\n");
    cost = usedgallon * currentprice;
    printf("Total cost in the trip = %lf",cost);
}
