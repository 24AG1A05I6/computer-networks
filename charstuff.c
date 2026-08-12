#include <stdio.h>
int main() 
{
char data[100];
int i;
printf("Enter the data: ");
scanf("%s", data);
printf("Stuffed message: $");
for (i = 0; data[i] != '\0'; i++)
{
if (data[i] == '$' || data[i] == '#' || data[i] == '@') 
{
printf("@");
}
printf("%c", data[i]);
}
printf("#");
return 0;
}
