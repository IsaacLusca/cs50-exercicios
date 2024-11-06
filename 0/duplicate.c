#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {

    for (int i = 0; i < numsSize; i++){
        int prim = nums[i];
        for(int j = i + 1; j < numsSize; j++){
            if (nums[i] == nums[j]){
                continue;
            }
            if (nums[j] == prim)
            {
                return true;
            }
            else{
                prim = nums[j];
            }

        }
    }
    return false;
}
int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = 4;

    bool check = containsDuplicate(nums, 4);
    if (check == true)
    {
        printf("True\n");
    }
    else
    {
        printf("false\n");
    }
}
