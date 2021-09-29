#include <stdio.h>

unsigned long long int fibo(int n)
{
    if (n <= 1) {
        return n;
    }
 
    unsigned long long int prefibo = 0, curfibo = 1;
    for (int i = 0; i < n - 1; i++)
    {
        unsigned long long int newfibo = prefibo + curfibo;
        prefibo = curfibo;
        curfibo = newfibo;
    }
 
    return curfibo;
}
 
int main(void)
{
    unsigned long long int n ;
    printf("enter n\n");
    scanf("%llu",&n);
    printf("nth Fibonacci number is %llu", fibo(n));
 
    return 0;
}
