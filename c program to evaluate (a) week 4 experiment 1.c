
#include <stdio.h>
void main()
{
    int A, B, C, D, E, F, G, result;
    printf("Enter A, B, C, D, E, F, G: ");
    scanf("%d %d %d %d %d %d %d",
          &A, &B, &C, &D, &E, &F, &G);

    result = A + B * C + (D * E) + F * G;
    printf("Result = %d", result);
}



    