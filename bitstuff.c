#include <stdio.h>

int main()
{
    int n, i, j, count;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    char a[n + 1], s[2 * n + 1];

    printf("At sender:\n");
    printf("Enter the message to be transmitted (0s and 1s): ");

    scanf("%s", a);

    i = 0;
    j = 0;
    count = 0;

    while (i < n)
    {
        s[j++] = a[i];

        if (a[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5)
        {
            s[j++] = '0';
            count = 0;
        }

        i++;
    }

    s[j] = '\0';

    printf("After stuffing the bits: %s\n", s);

    return 0;
}
