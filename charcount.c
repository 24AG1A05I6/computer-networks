#include <stdio.h>
#include <string.h>
int main()
{
int n, i;
char frame[100];
printf("Enter the number of frames: ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
printf("Enter frame %d: ", i);
scanf("%s", frame);
printf("Transmitted frame %d: %d%s\n", i, (int)strlen(frame), frame);
}
return 0;
}
