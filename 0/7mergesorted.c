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

        int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    // merge(nums1, 6, m, nums2, 3, n);

    printf("Array mesclado: ");
    for (int c = 0; c < m + n; c++) {
        printf("%d ", nums1[c]);
    }
    printf("\n");
    printf("%i\n", i);
    printf("%i\n", j);

    return 0;
}
