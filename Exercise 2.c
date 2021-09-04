#include <stdio.h>

int main()
{
    double currentprice;
    int miles;
    double cost;
    double usedgallen;
    
    printf("Please enter the current price of gas per gallen?");
    scanf("%lf", &currentprice);
    printf("Enter number of miles travelled in the trip");
    scanf("%d", &miles);
    usedgallen = miles/23;
    printf("Total usedgallen in the trip = %lf",usedgallen);
    printf("\n");
    cost = usedgallen * currentprice;
    printf("Total cost in the trip = %lf",cost);
}