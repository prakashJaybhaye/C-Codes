#include <stdio.h>

int main()
{
    float arr[6];
    float sum = 0;
    int i;
    float avg = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &arr[i]);
        if (i == 5)
        {
            sum += arr[i];
            sum -= arr[0];
            arr[0] = arr[i];
            avg = sum / 5;
            printf("avg = %f\n", avg);
            break;
        }

        sum += arr[i];
        //printf("sum  = %f\n", sum);
        avg = sum / 5;
        printf("avg = %f\n", avg);
    }
    return 0;
}
