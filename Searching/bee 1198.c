#include <stdio.h>
int main()
{
    long long nice, attractive;

    while (scanf("%lld", &nice) != EOF)
    {
        scanf("%lld", &attractive);
        if (x > y)
            printf("%lld\n", nice - attractive);
        else
            printf("%lld\n", attractive - nice);
    }

    return 0;
}
