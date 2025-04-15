#include<stdio.h>

int main()
{
    int localdata_1 = 0xAA;
    int localdata_2 = 0xBB;
    int localdata_3 = 0xCC;
    int localdata_4 = 0xDD;

    long int hex = ((localdata_1 << 24) | (localdata_2 << 16) | (localdata_3 << 8) | (localdata_4));
    printf("%d\n",hex);

    int a,b,c,d;
    printf("%x\n",(hex & 0xff000000)>>24);
    printf("%x\n",(hex & 0x00ff0000)>>16);
    printf("%x\n",(hex & 0x0000ff00)>>8);
    printf("%x\n",hex & 0x000000ff);
    return 0;
}
