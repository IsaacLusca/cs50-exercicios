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
    int k = 0;

    int i = 0, j = 0;

    while (i < size && j < size)
    {
        int temp = 0;
        if (nums2[j] < nums1[i])
        {
            nums1[k] = nums2[j];
            j++;
            k++;
        }
        else
        {
            nums1[k] = nums1[i];
            i++;
            k++;
        }
    }
        while (nums1[i] == nums2[j])
        {
            j++;
            k++;
        }

    // merge(nums1, 6, m, nums2, 3, n);

    printf("Array mesclado: ");
    for (int c = 0; c < m + n; c++) {
        printf("%d ", nums1[c]);
    }
    printf("\n");

    return 0;
}
