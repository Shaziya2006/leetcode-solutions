
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int* result = malloc(2 * sizeof(int));

                result[0] = i;
                result[1] = j;

                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}

int main()
{
    int returnSize;

    // Test Case 1: Normal input
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;

    int* result1 = twoSum(nums1, 4, target1, &returnSize);

    printf("Test Case 1: ");
    if (result1 != NULL)
    {
        printf("[%d, %d]\n", result1[0], result1[1]);
        free(result1);
    }

    // Test Case 2: Different pair
    int nums2[] = {3, 2, 4};
    int target2 = 6;

    int* result2 = twoSum(nums2, 3, target2, &returnSize);

    printf("Test Case 2: ");
    if (result2 != NULL)
    {
        printf("[%d, %d]\n", result2[0], result2[1]);
        free(result2);
    }

    return 0;
}
