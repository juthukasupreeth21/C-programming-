#include <stdio.h>
int main()
{
    int units;
    float cost,charge,total_amount;
    scanf("%d",&units);
    if(units<=50)
    {
        cost=units*2.50;
        charge=30;
    }
    else if(units<=100)
    {
        cost=units*3.00;
        charge=50;
    }
    else if(units<=200)
    {
        cost=units*3.5;
        charge=75;
    }
    else if(units<=300)
    {
        cost=units*4.0;
        charge=100;
    }
    else if(units>300)
    {
        cost=units*5.0;
        charge=125;
    }
    total_amount=cost+charge;
    printf("Electricity bill:%.2f",total_amount);
    return 0;
}
