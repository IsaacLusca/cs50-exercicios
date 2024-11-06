#include <stdio.h>
#include <stdlib.h>

bool containsDuplicate(int* nums, int numsSize) {
    int temp = nums[0];
    for (int i = 1; i < numsSize; i++)
    {
        if (temp == nums[i])
        {
            return true;
        }
        temp = nums[i];
    }
    return false;
}

int main()
{
    int nums[] = [1, 2, 3, 1]
    int n = 4;

    bool check = containsDUplicate(nums, 4);
    if (check == true)
    {
        printf("True\n");
    }
    else
    {
        printf("false\n");
    }
}
