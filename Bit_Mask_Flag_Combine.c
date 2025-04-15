#include <stdio.h>
int main()
{
    long int hex;
    long int swap_1,swap_2; 
    printf("Enter a Hex Number \n");
    scanf("%x",&hex);

    swap_1 = (hex & 0xffff0000)>>16;
    swap_2 = (hex & 0x0000ffff)<<16;
    
    printf("By swaping Result is = %x",(swap_1 | swap_2));

    return 0;
}
