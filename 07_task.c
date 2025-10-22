#include <stdio.h>
int main()
{
    int ids[10], freq[1000] = {0};
    printf("Enter 10 integers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ids[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (freq[ids[i]] == 0)
        {
            freq[ids[i]] = 1; // first time seeing this number
        }
        else
        {
            ids[i] = -1; // duplicate → replace with -1
        }
    }

    printf("\n updated list of ids (removing duplicate values): \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",ids[i]);
    }
    

    return 0;
}
