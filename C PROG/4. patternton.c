// Write a program to display a pattern up to n row

#include <stdio.h>
int main()
{
    int N, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}