#include <stdio.h>

// 使用 1 2 3 4，组成不重复的三位数

int main()
{
    int i, j, k;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 5; j++)
        {
            for (k = 1; k < 5; k++)
            {
                if (i != j && i != k && j != k)
                {
                    printf("%d, %d, %d\n", i, j, k);
                }
            }
        }
    }
}
