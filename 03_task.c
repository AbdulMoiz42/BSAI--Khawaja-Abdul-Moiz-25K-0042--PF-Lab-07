#include<stdio.h>
int main()
{
    int pass[10],fail[10], marks=0;
    int count_pass=0, count_fail=0,total_pass=0, total_fail=0;
    puts("Enter -1 to to stop");
    printf("Enter the marks of quiz up to 10 students:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&marks);
        if (marks == -1)
        {
            break;
        }
        if (marks>=5 && marks<=10)
        {
            pass[count_pass++]=marks;
            total_pass+=marks;
        }
        else if (marks>=0 && marks<=5)
        {
            fail[count_fail++]=marks;
            total_fail+=marks;
        }
        else{
            printf("You enter invalid number!Enter between 1-10 or -1 to stop\n");
            i--;
        }        
    }
    printf("\nMarks of Pass student: ");
    for (int i = 0; i < count_pass; i++)
    {
        printf("%d, ",pass[i]);
    }
    printf("\nMarks of Fail students: ");
    for (int i = 0; i < count_fail; i++)
    {
        printf("%d, ",fail[i]);
    }
    if (count_pass > 0)
        printf("\nAverage (Pass Students): %.2f", (float)total_pass / count_pass);
    else
        printf("\nNo pass students.");

    if (count_fail > 0)
        printf("\nAverage (Fail Students): %.2f\n", (float)total_fail / count_fail);
    else
        printf("\nNo fail students.\n");


    
   return 0;
}