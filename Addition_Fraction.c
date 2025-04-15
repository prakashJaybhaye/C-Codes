// add fraction 

#include <stdio.h>

int main()
{
    int num_1[2] = {1, 2};
    int num_2[2] = {1, 3};

    int ans[2] = {0, 0};
    if (num_1[1] == num_2[1])
    {
        ans[0] = num_1[0] + num_2[0];
        ans[1] = num_1[1];
    }
    else
    {
        ans[0] = (num_1[0] * num_2[1]) + (num_2[0] * num_1[1]);
        ans[1] = num_1[1] * num_2[1];
    }

    printf("%d/%d + %d/%d = %d/%d\n", num_1[0], num_1[1], num_2[0], num_2[1], ans[0], ans[1]); // Print the result
    return 0;
}
