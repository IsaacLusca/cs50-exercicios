#include <stdio.h>
#include <stdlib.h>

// void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
// {

// }

int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};
    int m = 3;
    int n = 3;

    int size = m + n;
    for (int i = 0; i < size; i++)
    {
        if (nums1[i] != 0)
        {
            continue;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                nums[i]
            }
        }
    }

    merge(nums1, 6, m, nums2, 3, n);

    printf("Array mesclado: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
