#include <stdio.h>
int main()
{
    int count;
    int hex;
    printf("Enter a Hex Number \n");
    scanf("%x",&hex);
    while (hex > 0)
    {
        if (hex % 2 == 1)
        {
            count++;
        }
        hex = hex >> 1;
        //printf("%d\n",a);
    }
    printf("In Given Hexadecimal Number %d once are present",count);    
    return 0;
}
