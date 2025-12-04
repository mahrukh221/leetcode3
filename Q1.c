#include <stdio.h>
// climbing stairs
int climbStairs(int n)
{
    if (n <= 2)
        return n;

    int a = 1, b = 2, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int n;
    printf("Enter number of stairs: ");
    scanf("%d", &n);
    printf("Ways = %d\n", climbStairs(n));
    return 0;
}
