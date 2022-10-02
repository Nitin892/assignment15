
// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

int greatestnumber(int nums[],int n)
{

    int max = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (max < nums[i])
            max = nums[i];
    }
    return max;
}

#include <stdio.h>
int main()
{

    int nums[10] = {23, 43, 4, 32, 3, 2, 42, 45, 324, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("%d", greatestnumber(nums, n));

    return 0;
}

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
int smallestnumber(int nums[],int n)
{

    int min = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (min > nums[i])
            min = nums[i];
    }
    return min;
}

#include <stdio.h>
int main()
{

    int nums[10] = {23, 43, 4, 32, 3, 2, 42, -1, 324, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("%d", smallestnumber(nums, n));

    return 0;
}

// 3. Write a function to sort an array of any size. (TSRS)

void sort(int nums[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int t = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = t;
            }
        }
    }
}

#include <stdio.h>
int main()
{
    int nums[10] = {23, 43, 4, 32, 3, 2, 42, -1, 324, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    sort(nums, n);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

void rotate(int nums[], int length, int n, char c)
{
    if (c == 'l')
    {
        for (int i = 0; i < n; i++)
        {
            int t = nums[0];
            for (int j = 0; j < length - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            nums[length - 1] = t;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int t = nums[length - 1];
            for (int j = 4; j > 0; j--)
            {
                nums[j] = nums[j - 1];
            }
            nums[0] = t;
        }
    }
}

#include <stdio.h>

int main()
{
    int nums[5] = {32, 29, 40, 12, 70};
    int length = sizeof(nums) / sizeof(nums[0]);
    rotate(nums, length, 2, 'r');

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.

int duplicate(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                return nums[i];
            }
        }
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int nums[7] = {70, 32, 29, 29, 40, 12, 70};
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("%d", duplicate(nums, n));
    return 0;
}

// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.

#include <stdio.h>
void display(int nums[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", nums[i]);
    }
}

#include <stdio.h>
int main()
{
    int k=5;
    int nums[] = {};

    printf("Enter size of elements array: ");
    scanf("%d", &k);
    printf("Enter %d elements: ", k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &nums[i]);
    }

    // display(nums, k);

    for (int i = k - 1; i >= 0; i--)
    {
        printf("%d\n", nums[i]);
    }
    return 0;
}

// 7. Write a function in C to count a total number of duplicate elements in an array.

int duplicatecount(int nums[], int n)
{
    int count = 0, last = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j] && nums[j] != last)
            {
                count++;
                last = nums[i];
            }
        }
    }
    return count;
}

#include <stdio.h>
int main()
{

    int nums[] = {40, 40, 12, 70, 32, 70, 70, 29};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("%d", duplicatecount(nums, n));
    return 0;
}

// 8. Write a function in C to print all unique elements in an array.

void unique(int nums[], int n)
{
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] == nums[j]))
                {
                    last = nums[j];
                    count++;
                }
        }
        if (count <= 1 && nums[i] != last)
        {
            printf("%d ", nums[i]);
        }
    }
}

#include <stdio.h>
int main()
{

    int nums[] = {40, 40, 12, 12, 70, 32, 70, 70, 29};
    int n = sizeof(nums) / sizeof(nums[0]);
    unique(nums, n);
    return 0;
}

// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.

void merge(int nums[], int n, int arr[], int m)
{
    int k = n;
    for (int j = 0; j < n; j++)
    {
        nums[k++] = arr[j];
    }
}

#include <stdio.h>
int main()
{
    int nums[] = {40, 30, 20, 15, 12, 10};
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    int m = sizeof(arr) / sizeof(arr[0]);
    merge(nums, n, arr, m);
    printf("after merging: \n");
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}

// 10. Write a function in C to count the frequency of each element of an array.
// not completed.

void frequency(int nums[], int n)
{
    int last;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
                nums[j] = -1;
            }
        }
        if (count >= 1 && nums[i] != -1)
            printf("%d %d\n", nums[i], count);
    }
}
#include <stdio.h>
int main()
{
    int nums[] = {40, 10, 11, 20, 10, 12, 20};
    int n = sizeof(nums) / sizeof(nums[0]);
    frequency(nums, n);
    return 0;
}
