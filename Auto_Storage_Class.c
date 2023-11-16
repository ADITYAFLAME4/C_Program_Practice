#include<stdio.h>
//auto int x=89; // Global Declearition is not allowed.
int main()
{
    auto int x = 10;
    
    //Block
    {
        auto int y;
        auto int x = 20;
        printf("\n Inside of Block, y = %d",y);// Gives Garbage value as not initialized, Might be 0 as well.
        printf("\n Inside of Block, x = %d",x);
    }

    printf("\n Outside of block, x = %d",x);
    return 0;
}