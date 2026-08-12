#include <stdio.h>
#include <string.h>

int main()
{
    char data[100], key[20], temp[150];
    int n, k, i, j;

    printf("Enter the data: ");
    scanf("%s", data);

    /* CRC-12 generator polynomial:
       x^12 + x^11 + x^3 + x^2 + x + 1
    */
    strcpy(key, "1100000001111");

    n = strlen(data);
    k = strlen(key);

    strcpy(temp, data);

    /* Append k-1 zeros */
    for (i = 0; i < k - 1; i++)
        strcat(temp, "0");

    /* Modulo-2 division */
    for (i = 0; i < n; i++)
    {
        if (temp[i] == '1')
        {
            for (j = 0; j < k; j++)
            {
                if (temp[i + j] == key[j])
                    temp[i + j] = '0';
                else
                    temp[i + j] = '1';
            }
        }
    }

    /* Display CRC remainder */
    printf("\nCRC-12 Remainder: ");

    for (i = n; i < n + k - 1; i++)
        printf("%c", temp[i]);

    /* Display transmitted data */
    printf("\nTransmitted Data: %s", data);

    for (i = n; i < n + k - 1; i++)
        printf("%c", temp[i]);

    printf("\n");

    return 0;
}
