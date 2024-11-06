#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {

    for (int i = 0; i < numsSize; i++){
        for (int j = 0; j < numsSize; j++){
            if (i == j){
                continue;
            }
            else{
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int nums[] = {1,1,3,4};
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
