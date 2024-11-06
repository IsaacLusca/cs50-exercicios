#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {

    for (int i = 0; i < numsSize; i++){
        int prim = nums[i];
        for(int j = 0; j < numsSize; j++){
            if (i == j){
                continue;
                j++;
            }
            else{
                if (nums[j] == prim)
                {
                    return true;
                }
                else{
                    prim = nums[j];
                }
            }
            j = 0;
        }
    }
    return false;
}
int main()
{
    int nums[] = {1,2,3,4};
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
