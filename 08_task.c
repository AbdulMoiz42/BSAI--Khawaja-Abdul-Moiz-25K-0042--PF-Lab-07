// #include<stdio.h>
// int main()
// {
//     int i;
//     char str[100];
//     printf("Enter  a sring:");
//     scanf("%[^A-Za-z]",str);

//     printf("\noutput: %s",str);
   
//    return 0;
// }
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    if (scanf("%[^A-Za-z]", str) == 1) {
        printf("\nOutput: %s\n", str);
    } else {
        printf("\nNo non-alphabetic characters found at the start!\n");
    }

    return 0;
}
