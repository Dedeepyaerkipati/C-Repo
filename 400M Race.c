#include<stdio.h>
int main()
{
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    if(X<Y&&X<Z)
    {
        printf("ALICE");
    }
    else if(Y<X&&Y<Z)
    {
        printf("BOB");
    }
    else 
    {
        printf("CHARLIE");
    }
    
    
    
    }