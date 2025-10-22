#include <stdio.h>
int main()
{
    int i, arr[10];
    int max, min, diff;
    printf("Enter 10 integers\n");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);

    }
    max=arr[0];
    min=arr[0];

    for ( i = 0; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        
    }

    diff=max-min;
    printf("the largest element is: %d\n",max);
    printf("the smallest element is: %d\n",min);
    printf("The difference between the largest and smalllest element is: %d",diff);
    
    return 0;
}