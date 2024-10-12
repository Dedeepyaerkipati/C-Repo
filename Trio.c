#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A==B+C)
    {
        printf("YES");
    }
    else if(B==C+A)
    {
        printf("YES");
    }
    else if(C==A+B)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
