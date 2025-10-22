#include<stdio.h>
int main()
{
    int arr[10],count=0,num=0;
    printf("Enter 10 integers: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

        
        printf("Enter number to search:\n");
    
    
    scanf("%d",&num);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==num)
        {
            count++;
        }
        
    }
    if (count>0)
    {
       printf("\n the number %d occured %d times.",num,count);

    }
    else{
        puts("\n Number not found.");
    }
    
    
    
    
    

    

   
   return 0;
}