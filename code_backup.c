#include<stdio.h>
int foo(int Q);
int base10_to_binary(int Q);
int main()
{
    unsigned int Q;
    unsigned int M;
    int A = 0;
    int n = 0;
    int old_A;
    unsigned int AQ;
    printf("Enter dividend: ");
    scanf("%d",&Q);
    printf("Enter divisor: ");
    scanf("%d",&M);
    while (n != 0){
        AQ = A*Q;
        n = foo(Q);
        AQ = AQ << 1; //for shifting 
        old_A = A;
        A = A - M;
        if (foo(A))
        {
            if (Q%2 != 0){
            Q = Q - 1;
            }
            A = old_A;
        }
        else
        {
            if (Q%2 == 0)
            {
                Q = Q + 1;
            }
        }

        n -= 1;
        printf("!!!!!!!!!!!!\n");
    }
    printf("Quotient = %d\n",Q);
    printf("Remainder = %d\n",A);
    return 0;
}


int foo(int Q)
{
    //dividing by 2 to find no. of bits
    int count = 0;
    int temp = Q;
    while (temp != 1)
    {
        temp = temp / 2;
        count++;
    }
    printf("%d\n",count);
    return count;
}